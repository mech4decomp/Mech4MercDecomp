/* func_0047fa40 - MLR PMesh static init: allocate MLRIndexedPrimitiveBase + buffers */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern int g_007da698;
extern int g_007da5fc;
extern int g_007da5f8;
extern int g_007da5f4;
extern int g_007da600;
extern char g_76f5e0[];

__declspec(naked) void func_0047fa40(void)
{
    __asm {
        push    esi
        push    edi
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        xor     edi, edi
        add     esp, 0x4
        cmp     esi, edi
        jz      L73
        mov     eax, dword ptr [g_007da698]
        push    eax
        push    offset g_76f5e0
        push    0x56
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi+0x14], edi
        mov     dword ptr [g_007da5fc], esi
        jmp     L79
L73:
        mov     dword ptr [g_007da5fc], edi
L79:
        push    0x8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        cmp     esi, edi
        jz      LA9
        push    0x1000
        mov     dword ptr [esi], edi
        mov     dword ptr [esi+0x4], 0x800
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esi], eax
        mov     dword ptr [g_007da5f8], esi
        jmp     LAF
LA9:
        mov     dword ptr [g_007da5f8], edi
LAF:
        push    0x1000
        call    FUN_004084d0
        push    0x8
        mov     dword ptr [g_007da5f4], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x8
        cmp     esi, edi
        jz      LEF
        push    0x100
        mov     dword ptr [esi], edi
        mov     dword ptr [esi+0x4], 0x100
        call    FUN_004084d0
        add     esp, 0x4
        pop     edi
        mov     dword ptr [esi], eax
        mov     dword ptr [g_007da600], esi
        pop     esi
        ret
LEF:
        mov     dword ptr [g_007da600], edi
        pop     edi
        pop     esi
        ret
    }
}
