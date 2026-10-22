/*
 * FUN_5e02f564 (61 B) — search a fixed-size element array for an entry whose
 * [idx+4] field matches the mode. Returns the matching element pointer, or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e039484;

__declspec(naked) void FUN_5e02f564(void)
{
    __asm {
        mov edx, dword ptr [esp+0x8]
        mov ecx, dword ptr [g_5e039484]
        push esi
        mov esi, dword ptr [esp+0x8]
        cmp dword ptr [edx+0x4], esi
        push edi
        mov eax, edx
        jz L_f58d
        lea edi, [ecx+ecx*2]
        lea edi, [edx+edi*4]
L_f581:
        add eax, 0xc
        cmp eax, edi
        jnc L_f58d
        cmp dword ptr [eax+0x4], esi
        jnz L_f581
L_f58d:
        lea ecx, [ecx+ecx*2]
        lea ecx, [edx+ecx*4]
        cmp eax, ecx
        jnc L_f59c
        cmp dword ptr [eax+0x4], esi
        jz L_f59e
L_f59c:
        xor eax, eax
L_f59e:
        pop edi
        pop esi
        ret
    }
}
