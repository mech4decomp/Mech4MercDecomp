/*
 * FUN_005ba250 (66 B) — Checks a sub-object state; returns 0 if a condition
 * holds, otherwise tail-calls FUN_0041fd80 on this+0x1a4.
 *
 * __thiscall (ECX = this), RET 0.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0041fd80(void);

__declspec(naked) void __fastcall FUN_005ba250(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [eax]
        push    ebx
        xor edx, dword ptr [DAT_007dab40]
        lea     eax, [edx + 0xc]
        mov     edx, dword ptr [eax]
        xor     edx, 0x85739531
        mov     bl, byte ptr [edx + 0x17]
        test    bl, bl
        pop     ebx
        jz      L287
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax + 0x50]
        cmp     dword ptr [edx + 0x80], 0x2
        jnz     L287
        xor     eax, eax
        ret
L287:
        add     ecx, 0x1a4
        jmp     FUN_0041fd80
    }


}
