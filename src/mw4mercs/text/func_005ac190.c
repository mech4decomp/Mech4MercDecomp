/*
 * FUN_005ac190 (184 B) - __thiscall.
 *
 * __thiscall (ECX = this), RET 8 (two float params).
 *
 * CFLAGS: /O1
 */

extern char __cdecl FUN_005abdb0(int param);
extern void *__cdecl FUN_005ac340(void *param, int param2);

__declspec(naked) void __stdcall FUN_005ac190(void *this_, float param_1, float param_2)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076c5b0;
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        push    esi
        mov     esi, ecx
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0xC]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x50]
        push    edx
        call    FUN_005abdb0
        add     esp, 4
        cmp     al, 1
        jnz     L_end
        fld     dword ptr [esp + 8]
        fcom dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_skipfchs
        fchs
L_skipfchs:
        fdiv    dword ptr [esp + 0xC]
        mov     eax, dword ptr [esi + 0xA4]
        test    eax, eax
        fstp    dword ptr [esp + 8]
        jnz     L_skipalloc
        push    1
        push    0x3F800000
        mov     ecx, esi
        call    FUN_005ac340
        mov     dword ptr [esi + 0xA4], eax
L_skipalloc:
        fld     dword ptr [esp + 8]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_skipzero
        mov     eax, dword ptr [esi + 0xA4]
        mov     dword ptr [eax + 0x14], 0
        pop     esi
        ret     8
L_skipzero:
        fld     dword ptr [esp + 8]
        fcomp   dword ptr [esi + 0x68]
        fnstsw  ax
        test    ah, 1
        jz      L_skipedx
        mov     ecx, dword ptr [esi + 0xA4]
        mov     edx, dword ptr [esi + 0x64]
        mov     dword ptr [ecx + 0x14], edx
        pop     esi
        ret     8
L_skipedx:
        fld     dword ptr [esi + 0x64]
        mov     eax, dword ptr [esi + 0xA4]
        fadd    st(0), st(0)
        fstp    dword ptr [eax + 0x14]
L_end:
        pop     esi
        ret     8
    }


}
