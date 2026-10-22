/*
 * FUN_00486d90 (183 B) - MLR global renderer state destructor.
 * Tears down the matrix stack (DAT_007da71c), vertex pool (DAT_007da718),
 * and MLREffect object (DAT_007da720), freeing each allocation.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00486b80(void);
extern void __cdecl FUN_00423b50(void);
extern void __cdecl FUN_00423b30(void);
extern void __cdecl FUN_00487140(void);
extern void __cdecl FUN_00487130(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);

extern int g_007da71c;
extern int g_007da718;
extern int g_007da720;

__declspec(naked) void FUN_00486d90(void)
{
    __asm {
        mov     eax, dword ptr [g_007da71c]
        push    esi
        lea     ecx, [eax + 0x20]
        call    FUN_00486b80
        mov     ecx, dword ptr [g_007da71c]
        call    FUN_00486b80
        mov     ecx, dword ptr [g_007da71c]
        test    ecx, ecx
        jz      L_486dff
        mov     eax, dword ptr [ecx - 0x4]
        push    ebp
        lea     ebp, [ecx - 0x4]
        mov     esi, eax
        shl     esi, 0x5
        add     esi, ecx
        dec     eax
        js      L_486df5
        push    ebx
        push    edi
        lea     edi, [esi + 0x10]
        lea     ebx, [eax + 0x1]
L_486dcc:
        sub     edi, 0x20
        lea     ecx, [edi + 0x8]
        sub     esi, 0x20
        call    FUN_00423b50
        mov     ecx, edi
        call    FUN_00423b30
        lea     ecx, [edi - 0x8]
        call    FUN_00487140
        mov     ecx, esi
        call    FUN_00487130
        dec     ebx
        jnz     L_486dcc
        pop     edi
        pop     ebx
L_486df5:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
        pop     ebp
L_486dff:
        mov     esi, dword ptr [g_007da718]
        test    esi, esi
        jz      L_486e21
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_486e18
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_486e18:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_486e21:
        mov     esi, dword ptr [g_007da720]
        test    esi, esi
        jz      L_486e3b
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_486e3b:
        mov     dword ptr [g_007da720], 0x0
        pop     esi
        ret
    }
}
