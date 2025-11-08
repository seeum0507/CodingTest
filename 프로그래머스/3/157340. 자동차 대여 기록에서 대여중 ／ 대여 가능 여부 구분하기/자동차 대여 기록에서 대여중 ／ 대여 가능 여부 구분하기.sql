-- 코드를 입력하세요
SELECT CAR_ID,
       MAX(
           CASE
               WHEN STR_TO_DATE('20221016', '%Y%m%d') BETWEEN START_DATE AND END_DATE
               THEN '대여중'
               ELSE '대여 가능'
           END
       ) AS AVAILABILITY
FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY
GROUP BY CAR_ID
ORDER BY CAR_ID DESC;
