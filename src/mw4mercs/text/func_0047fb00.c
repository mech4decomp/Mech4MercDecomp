/* func_0047fb00 - MLR PMesh static teardown: free buffers + base object */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415200(void);
extern int g_007da600;
extern int g_007da5f4;
extern int g_007da5f8;
extern int g_007da5fc;

__declspec(naked) void func_0047fb00(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007da600]
        push    edi
        xor     edi, edi
        cmp     esi, edi
        jz      L26
        mov     eax, dword ptr [esi]
        cmp     eax, edi
        jz      L1D
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L1D:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L26:
        mov     eax, dword ptr [g_007da5f4]
        push    eax
        mov     dword ptr [g_007da600], edi
        call    FUN_004084e0
        mov     esi, dword ptr [g_007da5f8]
        add     esp, 0x4
        cmp     esi, edi
        mov     dword ptr [g_007da5f4], edi
        jz      L62
        mov     eax, dword ptr [esi]
        cmp     eax, edi
        jz      L59
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L59:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L62:
        mov     esi, dword ptr [g_007da5fc]
        cmp     esi, edi
        mov     dword ptr [g_007da5f8], edi
        jz      L82
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L82:
        mov     dword ptr [g_007da5fc], edi
        pop     edi
        pop     esi
        ret
    }
}
