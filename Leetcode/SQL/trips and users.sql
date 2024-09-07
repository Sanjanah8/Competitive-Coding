with cte as (select * from trips where client_id not in 

                                    (select users_id from users

                                    where banned = "Yes" and role = "client")

                    and driver_id not in

                                (select users_id from users where banned =

                                "Yes" and role = "driver") )

select request_at as Day,

    round((sum(case when status <> "Completed" then 1 else 0 end) / count(*) ),2)

    as 'Cancellation Rate' from cte where request_at between '2013-10-01' and 

    '2013-10-03' group by request_at

    order by request_at

