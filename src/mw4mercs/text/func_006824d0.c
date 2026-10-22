/*
 * FUN_006824d0 (69 B) - Getter with conditional path.
 *
 * __thiscall (ECX = this), RET 8 (two stack params: out-pointer + char).
 * If char param is 0 and the object at this+4->+0x364 has byte +0x1a == 1,
 * returns 0. Otherwise copies a 12-byte struct from this+4->+0x4f0 into
 * the out-pointer and returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned char __fastcall FUN_006824d0(void)
{
    __asm {
        mov     al, byte ptr [esp + 8]
        test    al, al
        jnz     L_f0
        mov     eax, dword ptr [ecx + 4]
        mov     eax, dword ptr [eax + 0x364]
        test    eax, eax
        jz      L_eb
        cmp     byte ptr [eax + 0x1a], 1
        jnz     L_f0
L_eb:
        xor     al, al
        ret     8
L_f0:
        mov     eax, dword ptr [ecx + 4]
        mov     edx, dword ptr [eax + 0x4f0]
        mov     ecx, dword ptr [esp + 4]
        add     eax, 0x4f0
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [eax + 4]
        mov     eax, dword ptr [eax + 8]
        mov     dword ptr [ecx + 8], eax
        mov     dword ptr [ecx + 4], edx
        mov     al, 1
        ret     8
    }
}
