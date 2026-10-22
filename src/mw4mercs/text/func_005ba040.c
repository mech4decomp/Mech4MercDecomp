/*
 * FUN_005ba040 (95 B) — Queries a sub-object state and conditionally sets
 * a flag at +0x2ec, returning a value.
 *
 * __thiscall (ECX = this), RET 0.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0041fd80(void);

__declspec(naked) void __fastcall FUN_005ba040(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    ebx
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x198]
        call    FUN_0041fd80
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        lea     ecx, [edx + 0xc]
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        mov     bl, byte ptr [edx + 0x17]
        test    bl, bl
        jz      L84
        mov     ecx, dword ptr [ecx]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x50]
        mov     ecx, dword ptr [edx + 0x80]
        test    ecx, ecx
        jnz     L9A
L84:
        test    eax, eax
        jz      L9C
        mov     ecx, dword ptr [eax + 0x10]
        shr     ecx, 0x13
        test    cl, 0x1
        jz      L9C
        mov     byte ptr [esi + 0x2ec], 0x1
L9A:
        xor     eax, eax
L9C:
        pop     esi
        pop     ebx
        ret
    }


}
