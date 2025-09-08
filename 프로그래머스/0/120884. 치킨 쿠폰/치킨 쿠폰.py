def solution(chicken):
    service = 0
    coupon = chicken
    while coupon >= 10:
        new_chicken = coupon // 10
        service += new_chicken
        coupon = coupon % 10 + new_chicken
    return service
