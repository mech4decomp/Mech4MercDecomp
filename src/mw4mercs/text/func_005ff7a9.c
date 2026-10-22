/*
 * FUN_005ff7a9 (111 B) — alternate/mid-function entry: the "then" branch of
 * FUN_005ff720 (reached via its JBE tail-jump). Uses caller-set ESI/EBX/EBP/EDI
 * and shares the caller's epilogue (pops regs pushed by FUN_005ff720).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005ff840(void);
extern void __cdecl FUN_005ff820(void);
extern void __cdecl FUN_00602c80(void);
extern void __cdecl FUN_00602c40(void);
extern void __cdecl FUN_005ffb30(void);

__declspec(naked) void FUN_005ff7a9(void)
{
    __asm {
        sub     esp, 0x8
        lea     ecx, [esp+0x18]
        mov     edi, esp
        push    ecx
        mov     ecx, esi
        call    FUN_005ff840
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [eax+0x4]
        push    ebx
        mov     dword ptr [edi], edx
        lea     ecx, [esp+0x24]
        push    ecx
        lea     edx, [esp+0x30]
        push    edx
        mov     ecx, esi
        mov     dword ptr [edi+0x4], eax
        call    FUN_005ff820
        mov     ecx, eax
        call    FUN_00602c80
        sub     esp, 0x8
        mov     ecx, esp
        push    eax
        call    FUN_00602c40
        lea     eax, [esp+0x38]
        push    eax
        mov     ecx, esi
        call    FUN_005ffb30
        mov     cl, byte ptr [esp+0x38]
        mov     eax, dword ptr [esi+0x10]
        mov     esi, dword ptr [esi]
        neg     cl
        sbb     ecx, ecx
        cmp     esi, eax
        jz      L80e
L805:
        mov     dword ptr [esi], ecx
        add     esi, 0x4
        cmp     esi, eax
        jnz     L805
L80e:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     0x8
    }
}
