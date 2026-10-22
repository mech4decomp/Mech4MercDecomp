/*
 * FUN_005004C0 (78 B) — strtok-like tokenizer
 * Uses static pointer at 0x007DD15C for state
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* Static state pointer at 0x007DD15C */
extern char *g_state_7dd15c;

__declspec(naked) void func_005004c0(void)
{
    __asm {
        mov ecx, [esp+0x04]
        test ecx, ecx
        jz load_state
        mov dword ptr [g_state_7dd15c], ecx
        jmp start_scan
load_state:
        mov ecx, dword ptr [g_state_7dd15c]
start_scan:
        mov dl, [ecx]
        test dl, dl
        push esi
        mov esi, ecx
        jz zero_esi
        mov al, [esp+0x0C]
cmp_loop:
        cmp dl, al
        jz found_delim
        mov dl, [ecx+0x01]
        inc ecx
        test dl, dl
        jnz cmp_loop
found_delim:
        cmp ecx, esi
        mov dword ptr [g_state_7dd15c], ecx
        jnz check_null
zero_esi:
        xor esi, esi
check_null:
        cmp byte ptr [ecx], 0x00
        jz done
        mov byte ptr [ecx], 0x00
        inc ecx
        mov dword ptr [g_state_7dd15c], ecx
done:
        mov eax, esi
        pop esi
        ret
    }
}
