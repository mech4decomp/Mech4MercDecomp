/*
 * FUN_005ba3b0 (130 B) — Evaluates a set of conditions on the passed object
 * and returns a boolean.
 *
 * __stdcall, RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005f07c0(void);
extern void FUN_005fbe70(void);
extern void FUN_00415230(void);

__declspec(naked) void __stdcall FUN_005ba3b0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f1f84;
__asm {
push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        and     al, 0x1
        cmp     al, 0x1
        jz      L3EA
        call    FUN_005f07c0
        cmp     esi, eax
        jz      L3EA
        mov     ecx, esi
        call    FUN_005fbe70
        test    al, al
        jz      L3EA
        cmp     byte ptr [esi + 0xdc], 0x1
        jnz     L3F0
        mov     ecx, dword ptr [esi + 0xe0]
        cmp     dword ptr [ecx + 0x14], 0x1
        jnz     L42C
L3EA:
        xor     al, al
        pop     esi
        ret     0x4
L3F0:
        mov     al, byte ptr [esi + 0x300]
        test    al, al
        jnz     L42C
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     al, byte ptr [ecx + 0x17]
        test    al, al
        jz      L3EA
        mov eax, dword ptr [DAT_007f1f84]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L3EA
L42C:
        mov     al, 0x1
        pop     esi
        ret     0x4
    }


}
