class Solution:
    #tanviigoyall
    def buttonWithLongestTime(self, events: List[List[int]]) -> int:
        # Initialize variables
        max_duration = 0
        button_index = -1

        # Time of the previous press
        prev_time = 0

        for i, (index, time) in enumerate(events):
            # Calculate the duration of the current press
            if i == 0:  # First button press
                duration = time
            else:
                duration = time - prev_time

            # Update the maximum duration and button index if needed
            if duration > max_duration or (duration == max_duration and index < button_index):
                max_duration = duration
                button_index = index

            # Update the previous time
            prev_time = time

        return button_index
