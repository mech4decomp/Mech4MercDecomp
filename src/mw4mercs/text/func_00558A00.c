/*
 * FUN_00558a00 (239 B) ??? Object method. Computes some vector math
 * and calls a function.
 *
 * __fastcall (ECX = this), no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_00558A00(void)
{
    

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041acb0(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_00767550(void);
extern void __cdecl FUN_00627bc0(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x3c
        push    esi
        push    edi
        mov     edi, ecx
        lea     ecx, [edi + 0x6a8]
        call FUN_0041fd80
        mov     edi, dword ptr [edi + 0x384]
        mov     esi, eax
        mov     eax, dword ptr [edi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [ebp - 0x3c]
        call FUN_0041acb0
        or      eax, -1
        test    esi, esi
        mov     dword ptr [ebp - 4], 0xbf800000
        mov     dword ptr [ebp - 8], 0
        jz      L_skip
        mov     eax, dword ptr [esi + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [ebp - 0x24], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [ebp - 0x20], edx
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp - 0x1c], eax
        mov     ecx, dword ptr [edi + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     edx, [ebp - 0x24]
        push    edx
        lea     ecx, [ebp - 0x18]
        call FUN_0041c830
        lea     eax, [ebp - 0x18]
        push    eax
        lea     ecx, [ebp - 0x30]
        call FUN_00767550
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebp - 0x30]
        fld     dword ptr [ebp - 0x10]
        mov     dword ptr [ebp - 8], ecx
        fmul    dword ptr [ebp - 0x10]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x18]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp - 4]
        mov     eax, dword ptr [ebp - 4]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0xc], eax
        fld     dword ptr [ebp - 0xc]
        mov     eax, dword ptr [esi + 0x30]
        fstp    dword ptr [ebp - 4]
L_skip:
        mov     edx, dword ptr [ebp - 4]
        mov     ecx, dword ptr [ebp - 0x3c]
        push    eax
        mov     eax, dword ptr [ebp - 8]
        push    edx
        mov edx, dword ptr [DAT_007dab44]
        push    eax
        mov     eax, dword ptr [edx]
        push    ecx
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x40]
        xor     ecx, 0x85739531
        call FUN_00627bc0
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
