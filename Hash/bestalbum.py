def solution(genres, plays):
    album = {}
    play_map = {}
    for i in range(len(genres)):
        if genres[i] in album:
            album[genres[i]].append(i)
            play_map[genres[i]].append(plays[i])
        else:
            album[genres[i]] = [i]
            play_map[genres[i]] = [plays[i]]
    filtered_album = {}
    for key in album:
        album[key].sort(key = lambda x : plays[x], reverse = True)
        filtered_album[sum(play_map[key])] = album[key]
    sorted_dict = sorted(filtered_album.items(), key = lambda item: item[0], reverse = True)
    answer = []
    for it in sorted_dict:
        if len(it[1]) == 1:
            answer.append(it[1][0])
        else:
            answer.append(it[1][0])
            answer.append(it[1][1])
    return answer

print(solution(["classic", "pop", "classic", "classic", "pop"], [500, 600, 150, 800, 2500]))