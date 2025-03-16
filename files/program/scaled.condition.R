scaled.condition <- function(x)
{ # calcula el número condición 'escalado'
  colScales <- apply(x, 2, function(x) sum(x^2))
  z <- scale(x, center = FALSE, scale = sqrt(colScales))
  d <- svd(z)$d
  p <- length(d)
  cn <- d[1] / d[p]
  obj <- list(condition = cn, values = d, x.scaled = z)
  obj
}
