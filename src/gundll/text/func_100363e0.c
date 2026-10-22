/*
 * FUN_100363e0 (307 B) — __thiscall, RET 0x4.
 * SEH-guarded object method (sibling of FUN_10032170): builds a string
 * via FUN_100340e0 and dispatches through a vtable.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100333f0(void);
extern void __cdecl FUN_100340e0(void);
extern void __cdecl FUN_10001d50(void);
extern void __cdecl FUN_10034340(void);
extern void __cdecl FUN_10001d60(void);
extern void __cdecl FUN_10033ad0(void);
extern void __cdecl FUN_10033cc0(void);
extern void __cdecl FUN_100339a0(void);

extern char g_10048c03;

__declspec(naked) void FUN_100363e0(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    offset g_10048c03
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x6c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x8c]
        lea     eax, [esp + 0x10]
        mov     esi, ecx
        mov     ecx, dword ptr [edi + 4]
        push    eax
        push    ecx
        call    FUN_100333f0
        xor     ebp, ebp
        cmp     eax, ebp
        jl      L_64fe
        mov     edx, dword ptr [esi + 0x10]
        push    edx
        push    ebp
        lea     eax, [esp + 0x48]
        push    eax
        mov     ebx, 1
        push    ebp
        lea     ecx, [esp + 0x28]
        mov     word ptr [esp + 0x58], bp
        mov     dword ptr [esp + 0x54], ebp
        mov     dword ptr [esp + 0x50], ebx
        call    FUN_100340e0
        cmp     dword ptr [edi + 0x10], ebp
        mov     dword ptr [esp + 0x84], ebp
        jbe     L_648d
        push    0x14
        call    FUN_10001d50
        add     esp, 4
        mov     dword ptr [esp + 0x8c], eax
        cmp     eax, ebp
        mov     byte ptr [esp + 0x84], bl
        jz      L_6481
        mov     edx, dword ptr [edi + 0x10]
        push    ebp
        lea     ecx, [esi + 0x4c]
        push    ecx
        mov     ecx, dword ptr [edi + 0xc]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_10034340
        jmp     L_6483
    L_6481:
        xor     eax, eax
    L_6483:
        mov     byte ptr [esp + 0x84], 0
        mov     ebp, eax
    L_648d:
        mov     eax, dword ptr [esi + 0x14]
        mov     edx, dword ptr [eax]
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x34]
        push    ecx
        push    ebp
        sub     esp, 8
        mov     ecx, esp
        mov     dword ptr [ecx], esi
        mov     si, word ptr [esp + 0x28]
        push    eax
        mov     word ptr [ecx + 4], si
        call    dword ptr [edx + 4]
        test    ebp, ebp
        mov     bl, al
        jz      L_64c0
        push    ebp
        call    FUN_10001d60
        add     esp, 4
    L_64c0:
        lea     ecx, [esp + 0x18]
        call    FUN_10033ad0
        lea     ecx, [esp + 0x18]
        mov     dword ptr [edi + 0x18], eax
        call    FUN_10033cc0
        xor     edx, edx
        mov     dx, ax
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x84], 0xffffffff
        mov     dword ptr [edi + 0x1c], edx
        call    FUN_100339a0
        xor     eax, eax
        test    bl, bl
        setnz   al
        dec     eax
        and     eax, 0x80004005
    L_64fe:
        mov     ecx, dword ptr [esp + 0x7c]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr fs:[0], ecx
        pop     ebx
        add     esp, 0x78
        ret     4
    }
}
