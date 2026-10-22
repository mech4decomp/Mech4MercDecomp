/*
 * FUN_004ed660 (464 B) — __thiscall (ECX=this, RET 0x8). MLR text-label
 * object constructor: reads a config object (EDI), initializes member
 * fields (font, color, position, size, flags), validates ranges via
 * assert FUN_006fab90.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00858940;
extern int g_00858944;
extern float g_0076c5b0;

extern void __cdecl FUN_004d5b10(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_00729ae0(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_004122e0(void);
extern void __cdecl FUN_00411d60(void);

__declspec(naked) void FUN_004ed660(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x8]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004d5b10
        mov     edi, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [edi + 0x14]
        mov     eax, 0xbf800000
        lea     ebx, [esi + 0x1c]
        mov     dword ptr [ebx], eax
        mov     dword ptr [esi + 0x34], 0x0
        lea     ecx, [esi + 0x38]
        mov     dword ptr [ecx], 0x0
        push    edx
        mov     dword ptr [ebx + 0x8], eax
        mov     dword ptr [ebx + 0x4], eax
        mov     dword ptr [ebx + 0xc], eax
        mov     dword ptr [esi], 0x774928
        call    FUN_00412780
        push    0x1
        lea     eax, [esi + 0x14]
        push    eax
        push    0x7749f4
        mov     ecx, edi
        call    FUN_00411bf0
        mov     eax, dword ptr [esi + 0x14]
        push    0x0
        push    0x100
        push    0x0
        push    eax
        call    FUN_00729ae0
        push    0x0
        lea     ecx, [ebp + 0x8]
        push    ecx
        push    0x7749f4
        mov     ecx, edi
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [ebp + 0x8], 0x76b768
        call    FUN_00411bf0
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
        lea     ecx, [esi + 0x34]
        call    FUN_00412780
        lea     eax, [esi + 0x2c]
        push    0x0
        push    eax
        push    0x7749e4
        mov     ecx, edi
        mov     byte ptr [eax], 0x1
        call    FUN_00411ec0
        push    0x1
        lea     eax, [esi + 0x3c]
        push    eax
        push    0x7749d8
        mov     ecx, edi
        call    FUN_00411cb0
        mov     eax, dword ptr [esi + 0x3c]
        test    eax, eax
        mov     ecx, dword ptr [g_00858940]
        jl      L_xbad
        cmp     eax, ecx
        jle     L_xok
L_xbad:
        mov     eax, dword ptr [esi + 0x38]
        push    ecx
        push    eax
        push    0x7749b0
        call    FUN_006fab90
        add     esp, 0xc
        test    eax, eax
        jz      L_xok
        int     3
L_xok:
        push    0x1
        lea     eax, [esi + 0x40]
        push    eax
        push    0x7749a4
        mov     ecx, edi
        call    FUN_00411cb0
        mov     eax, dword ptr [esi + 0x40]
        test    eax, eax
        mov     ecx, dword ptr [g_00858944]
        jl      L_ybad
        cmp     eax, ecx
        jle     L_yok
L_ybad:
        push    ecx
        mov     ecx, dword ptr [esi + 0x38]
        push    ecx
        push    0x77497c
        call    FUN_006fab90
        add     esp, 0xc
        test    eax, eax
        jz      L_yok
        int     3
L_yok:
        push    0x0
        mov     eax, 0x3f800000
        push    ebx
        push    0x76ff70
        mov     ecx, edi
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [ebx], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        call    FUN_004122e0
        push    0x0
        lea     ebx, [esi + 0x18]
        push    ebx
        push    0x7749e4
        mov     ecx, edi
        mov     dword ptr [ebx], 0x3f800000
        call    FUN_00411d60
        fld     dword ptr [ebx]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        /* __emit: MSVC6 rejects `test ah, imm8` */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      L_sizeok
        push    0x774964
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_sizeok
        int     3
L_sizeok:
        lea     eax, [esi + 0x2d]
        push    0x0
        push    eax
        push    0x774958
        mov     ecx, edi
        mov     byte ptr [eax], 0x0
        call    FUN_00411ec0
        lea     eax, [esi + 0x2e]
        push    0x0
        push    eax
        push    0x774948
        mov     ecx, edi
        mov     byte ptr [eax], 0x0
        call    FUN_00411ec0
        lea     eax, [esi + 0x2f]
        push    0x0
        push    eax
        push    0x774940
        mov     ecx, edi
        mov     byte ptr [eax], 0x0
        call    FUN_00411ec0
        lea     eax, [esi + 0x30]
        push    0x0
        push    eax
        push    0x774938
        mov     ecx, edi
        mov     byte ptr [eax], 0x0
        call    FUN_00411ec0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
    }
}
