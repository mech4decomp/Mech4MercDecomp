/*
 * FUN_00758b90 (262 B) — __fastcall (ECX = this). Sets a flag, issues a
 * series of FUN_00713cc0 config calls, computes a float delta and calls
 * FUN_00758f00, then walks a linked list calling FUN_00713ae0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;
extern float g_76d070;

extern void __stdcall FUN_00713d10(void);
extern void __stdcall FUN_00713cc0(int a, int b);
extern int __stdcall FUN_00704a80(int a, int b, int c, int d);
extern char __stdcall FUN_00758f00(float a, float b);
extern void __stdcall FUN_00713ae0(int a, int b);
extern void __stdcall FUN_00713d70(void);

__declspec(naked) void __stdcall FUN_00758b90(void *this)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        mov     byte ptr [esi + 0x204c], 0x1
        call    FUN_00713d10
        push    0x1
        push    0x7
        call    FUN_00713cc0
        push    0x0
        push    0x8
        call    FUN_00713cc0
        push    0x0
        push    0x9
        call    FUN_00713cc0
        push    0x0
        push    0xa
        call    FUN_00713cc0
        push    0x1
        push    0x4
        call    FUN_00713cc0
        push    0x0
        push    0xb
        call    FUN_00713cc0
        push    0x0
        push    0x6
        call    FUN_00713cc0
        push    0x0
        push    0x5
        call    FUN_00713cc0
        push    0x0
        push    0xc
        call    FUN_00713cc0
        push    0x1
        push    0xf
        call    FUN_00713cc0
        push    0x0
        push    0x12
        call    FUN_00713cc0
        push    0x3
        push    0xd
        call    FUN_00713cc0
        push    0x3
        push    0x10
        call    FUN_00713cc0
        push    0x0
        push    0x0
        push    0x0
        push    0x2
        call    FUN_00704a80
        test    eax, eax
        jz      L_c2e
        fld     dword ptr [g_76c5b0]
        jmp     L_c34
L_c2e:
        fld     dword ptr [g_76d070]
L_c34:
        fld     dword ptr [esi + 0x30]
        push    ecx
        fsub    st(0), st(1)
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [esi + 0x2c]
        mov     ecx, esi
        fsub    st(0), st(1)
        fstp    dword ptr [esp]
        fstp    st(0)
        call    FUN_00758f00
        test    al, al
        jz      L_c5c
        push    0x2
        push    0xb
        call    FUN_00713cc0
L_c5c:
        mov     esi, dword ptr [esi + 0x18]
        or      ebx, 0xffffffff
        test    esi, esi
        jz      L_c8e
        push    edi
L_c67:
        mov     edi, dword ptr [esi + 0x84]
        cmp     ebx, edi
        jz      L_c7b
        push    edi
        push    0x1
        call    FUN_00713cc0
        mov     ebx, edi
L_c7b:
        push    0x4
        push    esi
        call    FUN_00713ae0
        mov     esi, dword ptr [esi + 0x80]
        test    esi, esi
        jnz     L_c67
        pop     edi
L_c8e:
        call    FUN_00713d70
        pop     esi
        pop     ebx
        ret
    }
}
