/*
 * FUN_006a5f60 (574 B) — ABL object/record factory. Iterates a transform list,
 * computes distances, calls virtual methods and many ABL helper functions.
 * Returns a pointer (ESI).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern char g_007b8d88;
extern void __cdecl FUN_005cb210(void);
extern void __cdecl FUN_006a7f30(void);
extern void __cdecl FUN_006a7cc0(void);
extern void __cdecl FUN_006a61a0(void);
extern void __cdecl FUN_006a6350(void);
extern void __cdecl FUN_006a58c0(void);
extern void __cdecl FUN_006a7e30(void);
extern void __cdecl FUN_006a7e60(void);
extern void __cdecl FUN_006a7ce0(void);
extern void __cdecl FUN_006a7fe0(void);
extern void __cdecl FUN_006a8010(void);
extern void __cdecl FUN_004114b0(void);
extern void __cdecl FUN_005d2900(void);
extern void __cdecl FUN_006632e0(void);
extern void __cdecl FUN_006a63c0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_006a7f80(void);
extern void __cdecl FUN_006a8080(void);
extern void __cdecl FUN_006a80d0(void);
extern void __cdecl FUN_005da4b0(void);

__declspec(naked) void *FUN_006a5f60(void)
{
    __asm {
        sub     esp, 0x3c
        push    ebx
        push    esi
        push    edi
        lea     eax, [esp + 0xf]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_005cb210
        mov     eax, dword ptr [esp + 0x60]
        mov     ecx, dword ptr [esp + 0x54]
        mov     esi, dword ptr [esp + 0x50]
        mov     edx, dword ptr [ecx]
        push    eax
        lea     eax, [esp + 0x20]
        push    eax
        push    esi
        call    dword ptr [edx]
        lea     ecx, [esp + 0x54]
        push    ecx
        lea     edx, [esp + 0x64]
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_006a7f30
        lea     eax, [esp + 0x54]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_006a7cc0
        mov     edx, dword ptr [esi]
        lea     ecx, [esp + 0x28]
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        push    eax
        call    FUN_006a61a0
        lea     eax, [esp + 0x30]
        push    7
        push    eax
        call    FUN_006a6350
        mov     edi, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0x30]
        add     esp, 0x10
        cmp     edi, eax
        jz      loc_6A601E
loc_6A5FDD:
        mov     ebx, dword ptr [esp + 0x58]
        lea     ecx, [esp + 0x28]
        push    ecx
        push    ebx
        push    edi
        push    esi
        call    FUN_006a58c0
        fstp    dword ptr [esp + 0x64]
        add     esp, 0x10
        push    edi
        lea     edx, [esp + 0x58]
        push    edx
        lea     ecx, [esp + 0x40]
        call    FUN_006a7e30
        lea     eax, [esp + 0x38]
        push    eax
        lea     ecx, [esp + 0x64]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_006a7e60
        mov     eax, dword ptr [esp + 0x20]
        add     edi, 0xc
        cmp     edi, eax
        /* __emit: backward jnz rel8; MSVC6 miscomputes offset (0xBB vs ref 0xBF) across call relocs */
        __emit 0x75
        __emit 0xBF
loc_6A601E:
        lea     ecx, [esp + 0x28]
        call    FUN_006a7ce0
        lea     edx, [esp + 0x60]
        push    edx
        lea     ecx, [esp + 0x14]
        call    FUN_006a7fe0
        mov     eax, dword ptr [eax]
        lea     ecx, [esp + 0x50]
        push    ecx
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x58], eax
        call    FUN_006a8010
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x54]
        cmp     ecx, eax
        jz      loc_6A6150
        fld     dword ptr [esp + 0x5c]
        mov     ebx, dword ptr [esp + 0x64]
        fmul    dword ptr [esp + 0x5c]
        fstp    dword ptr [esp + 0x60]
loc_6A6067:
        lea     edx, [esp + 0x5c]
        push    edx
        mov     dword ptr [esp + 0x60], ecx
        call    FUN_004114b0
        mov     eax, dword ptr [esp + 0x60]
        mov     edx, dword ptr [esi]
        add     esp, 0x4
        mov     ecx, esi
        lea     edi, [eax + 0x14]
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_005d2900
        fld     dword ptr [esp + 0x60]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     loc_6A60C5
        lea     ecx, [esp + 0x28]
        push    ecx
        push    edi
        call    FUN_006632e0
        fcomp   dword ptr [esp + 0x68]
        add     esp, 0x8
        fnstsw  ax
        test    ah, 0x1
        jnz     loc_6A60D9
loc_6A60C5:
        push    ebx
        push    edi
        lea     edx, [esp + 0x30]
        push    edx
        push    esi
        call    FUN_006a63c0
        add     esp, 0x10
        test    al, al
        jnz     loc_6A6103
loc_6A60D9:
        lea     eax, [esp + 0x54]
        push    eax
        call    FUN_004114b0
        add     esp, 0x4
        lea     ecx, [esp + 0x50]
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_006a8010
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x54]
        cmp     ecx, eax
        jz      loc_6A6150
        jmp     loc_6A6067
loc_6A6103:
        mov     edx, dword ptr [esp + 0x54]
        lea     eax, [esp + 0x5c]
        push    eax
        mov     dword ptr [esp + 0x60], edx
        call    FUN_004114b0
        mov     ecx, dword ptr [esp + 0x60]
        add     ecx, 0x14
        add     esp, 0x4
        push    ecx
        lea     ecx, [esp + 0x30]
        mov     byte ptr [esp + 0x2c], 1
        call    FUN_0040c5d0
        mov     esi, dword ptr [esp + 0x4c]
        mov     dl, byte ptr [esp + 0x28]
        lea     eax, [esp + 0x2c]
        push    eax
        lea     ecx, [esi + 0x4]
        mov     byte ptr [esi], dl
        call    FUN_0040c5d0
        lea     ecx, [esp + 0x10]
        call    FUN_006a7f80
        jmp     loc_6A618C
loc_6A6150:
        push    offset g_007b8d88
        lea     ecx, [esp + 0x30]
        mov     byte ptr [esp + 0x2c], 0
        call    FUN_0040c5d0
        mov     cl, byte ptr [esp + 0x28]
        mov     esi, dword ptr [esp + 0x4c]
        lea     edx, [esp + 0x2c]
        mov     byte ptr [esi], cl
        push    edx
        lea     ecx, [esi + 0x4]
        call    FUN_0040c5d0
        lea     ecx, [esp + 0x10]
        call    FUN_006a8080
        lea     ecx, [esp + 0x10]
        call    FUN_006a80d0
loc_6A618C:
        lea     ecx, [esp + 0x1c]
        call    FUN_005da4b0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x3c
        ret
    }
}
