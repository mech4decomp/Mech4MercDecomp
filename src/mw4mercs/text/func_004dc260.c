#include <windows.h>

extern int g_7dab44;
extern int g_7dab40;
extern int g_7db098;
extern int g_7db090;
extern void __stdcall FUN_004D5B10(void *);
extern int __cdecl FUN_004CDFA0(int);
extern void __cdecl FUN_004CEC70(void);

__declspec(naked) void __fastcall FUN_004DC260(void *this)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004D5B10
        mov     ecx, dword ptr [esp + 0x10]
        mov     edi, dword ptr [ecx + 0x14]
        mov     eax, dword ptr [esp + 0x14]
        mov     dl, byte ptr [eax]
        xor     ecx, ecx
        mov     cx, word ptr [eax + 0x2]
        mov     word ptr [esi + 0x16], 0x0
        mov     word ptr [esi + 0x16], cx
        mov     byte ptr [esi + 0x14], 0x0
        mov     dword ptr [esi + 0x10], edi
        mov     byte ptr [esi + 0x14], dl
        inc     ecx
        mov     word ptr [eax + 0x2], cx
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        xor     ecx, ecx
        mov     cl, dl
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004CDFA0
        cmp     eax, dword ptr [g_7db098]
        mov     dword ptr [esi + 0x18], eax
        jz      l_common
        mov     ecx, dword ptr [g_7dab44]
        mov     ecx, dword ptr [ecx]
        push    ebx
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0x14]
        xor     ecx, 0x85739531
        mov     bl, byte ptr [ecx + 0x17fc]
        mov     ecx, dword ptr [g_7db090]
        mov     edx, edi
        and     edx, 0xfffffff8
        test    bl, bl
        mov     dword ptr [esi + 0x10], edx
        pop     ebx
        jz      l_bl_zero
        cmp     eax, ecx
        jz      l_common
        test    dl, 0x7
        jnz     l_common
        and     edx, 0xfffffffd
        or      edx, 0x5
        push    esi
        mov     ecx, eax
        mov     dword ptr [esi + 0x10], edx
        call    FUN_004CEC70
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0xc
    l_bl_zero:
        cmp     eax, ecx
        jnz     l_bl_zero_ne
        test    dl, 0x7
        jnz     l_common
        and     edx, 0xfffffffc
        or      edx, 0x4
        push    esi
        mov     ecx, eax
        mov     dword ptr [esi + 0x10], edx
        call    FUN_004CEC70
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0xc
    l_bl_zero_ne:
        test    dl, 0x7
        jnz     l_common
        and     edx, 0xfffffffb
        or      edx, 0x3
        mov     dword ptr [esi + 0x10], edx
    l_common:
        push    esi
        mov     ecx, eax
        call    FUN_004CEC70
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
