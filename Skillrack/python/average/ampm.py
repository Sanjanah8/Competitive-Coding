def get_am_pm(time_str):
    try:
        hours, minutes = map(int, time_str.split(":"))

       
        if not (0 <= hours <= 23 and 0 <= minutes <= 59):
            print("invalidinput")
            return

     
        if hours < 12:
            print("AM")
        else:
            print("PM")

    except:
        print("invalidinput")



time_input = input("Enter time in HH:MM format (24-hour): ")
get_am_pm(time_input)
