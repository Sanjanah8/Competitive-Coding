select round(count(distinct player_id)/ (select count(distinct player_id) from activity), 2) as fraction
from
        (select min(event_date) over (partition by player_id) as first_date,
             player_id, event_date
            from activity
        ) as s1
where DateDiff(event_date, first_date) = 1
