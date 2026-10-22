/*
 * FUN_0061FA50 (45 B) — __thiscall (ECX = this, RET 0x4). Linear search of
 * array at [this+8] (count [this+4]) for param_1; returns 1 if found,
 * else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_0061fa50(void *param_1)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x4]
        test    edx, edx
        push    esi
        jle     L_notfound
        xor     eax, eax
        test    edx, edx
        jle     L_notfound
        mov     ecx, dword ptr [ecx + 0x8]
        mov     esi, dword ptr [esp + 0x8]
    L_loop:
        cmp     esi, dword ptr [ecx]
        jz      L_found
        inc     eax
        add     ecx, 0x4
        cmp     eax, edx
        jl      L_loop
    L_notfound:
        xor     al, al
        pop     esi
        ret     0x4
    L_found:
        mov     al, 0x1
        pop     esi
        ret     0x4
    }
}
