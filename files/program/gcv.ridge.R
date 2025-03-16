GCV.ridge <- function(x, y, lambda)
{ # escoge el parámetro ridge entre una 'grilla' de valores
  n <- nrow(x)
  p <- ncol(x)
  rs <- svd(x)
  rhs <- t(rs$u) %*% y
  d <- rs$d
  cf <- rs$v %*% (rhs / d)
  yhat <- x %*% cf
  resid <- y - yhat
  s2 <- sum(resid^2) / (n - p)
  HKB <- p * s2 / sum(cf^2)
  LW <- p * s2 * n / sum(yhat^2)
  k <- length(lambda)
  div <- d^2 + rep(lambda, rep(p, k))
  a <- drop(d * rhs) / div
  dim(a) <- c(p, k)
  cf <- rs$v %*% a
  GCV <- n * colSums((y - x %*% cf)^2) / (n - colSums(matrix(d^2 / div, p)))^2
  idx <- order(GCV)[1]
  opt <- lambda[idx]
  obj <- list(coef = cf, lambda = lambda, GCV = GCV, lambda.opt = opt, HKB = HKB, LW = LW)
  obj
}

GCV.ridge0 <- function(x, y, lambda)
{ # ’for ’ version
  n <- nrow(x)
  p <- ncol(x)
  rs <- svd(x)
  rhs <- t(rs$u) %*% y
  d <- rs$d
  cf <- rs$v %*% (rhs / d)
  yhat <- x %*% cf
  res <- y - yhat
  s2 <- sum(res^2) / (n - p)
  HKB <- p * s2 / sum(cf^2)
  LW <- p * s2 * n / sum(yhat^2)
  k <- length(lambda)
  GCV <- rep(0, k)
  for (i in 1:k) {
    div <- d^2 + lambda[i]
    a <- d * rhs / div
    res <- y - rs$u %*% (d * a)
    RSS <- sum(res^2)
    edf <- sum(d^2 / div)
    GCV[i] <- n * RSS / (n - edf)^2
  }
  idx <- order(GCV)[1]
  opt <- lambda[idx]
  obj <- list(lambda = lambda, GCV = GCV, lambda.opt = opt, HKB = HKB, LW = LW)
  obj
}
