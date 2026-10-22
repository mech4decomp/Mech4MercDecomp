/*
 * FUN_005bb950 (107 B) — __fastcall (ECX = this), RET.
 *
 * Destructor-ish: sets vtable, conditionally dispatches a virtual method
 * on an obfuscated global object, frees a 0x10-byte object, clears global
 * 0x7F2114, and calls two sub-destructors.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004c8e90(void);
extern void __fastcall FUN_0067a4e0(void);
extern void __fastcall FUN_004e1080(void);

__declspec(naked) void FUN_005bb950(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f2114;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x40]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x40]
        mov     dword ptr [esi], 0x7870F4
        jz      L1
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jz      L2
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L2:
        push    0x10
        call    FUN_004c8e90
        add     esp, 4
L1:
        mov ecx, dword ptr [DAT_007f2114]
        test    ecx, ecx
        jz      L3
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L3:
        lea     ecx, [esi + 0x7C]
        mov dword ptr [DAT_007f2114], 0x0
        call    FUN_0067a4e0
        mov     ecx, esi
        call    FUN_004e1080
        pop     esi
        ret
    }


}
