/*
 * FUN_005db360 (75 B) — __thiscall (ECX=this, RET 4). Returns a bool based
 * on several byte flags in the object and a comparison against 0x007f2500.
 *
 * Match: target 100%
 */

extern int DAT_007f2500;

__declspec(naked) void __stdcall FUN_005db360(void *param)
{
    __asm {
        mov     al, byte ptr [ecx + 0x2f9]
        test    al, al
        jz      L_b36f
        xor     al, al
        ret     0x4
    L_b36f:
        mov     al, byte ptr [esp + 0x4]
        test    al, al
        jnz     L_b386
        mov     al, byte ptr [ecx + 0x30a]
        test    al, al
        jz      L_b386
        xor     al, al
        ret     0x4
    L_b386:
        mov     al, byte ptr [ecx + 0x2f0]
        test    al, al
        jz      L_b395
        xor     al, al
        ret     0x4
    L_b395:
        mov     ecx, dword ptr [ecx + 0x2fc]
        mov     edx, dword ptr [DAT_007f2500]
        xor     eax, eax
        cmp     ecx, edx
        setz    al
        ret     0x4
    }
}
