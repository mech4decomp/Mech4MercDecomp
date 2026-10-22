/*
 * FUN_0048ad90 (300 B) __thiscall (RET 0x8): light-append helper that
 * dispatches on the light type byte and calls FUN_0048aa60/FUN_0048abf0.
 *
 * CFLAGS: /O1
 */

extern char g_007da86c;
extern void __cdecl FUN_0048abf0(void);
extern void __cdecl FUN_0048aa60(void);

__declspec(naked) void FUN_0048ad90(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp+0x18]
        xor     eax, eax
        mov     al, byte ptr [esi+0x12]
        mov     ebp, ecx
        push    edi
        mov     dword ptr [esp+0x14], ebp
        mov     dword ptr [esp+0x1c], eax
        sub     eax, 0
        jz      loc_48ae87
        dec     eax
        jz      loc_48adc3
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 8
        ret     8
loc_48adc3:
        mov     ebp, dword ptr [esp+0x20]
        mov     eax, dword ptr [esi]
        push    ebp
        mov     ecx, esi
        xor     edi, edi
        call    dword ptr [eax+0x48]
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp+0x20], eax
        xor     eax, eax
        mov     ax, word ptr [esi+0xa]
        push    ebp
        mov     ecx, esi
        mov     dword ptr [esp+0x14], eax
        call    dword ptr [edx+0x1c]
        mov     ecx, dword ptr [eax+4]
        test    ch, 0x3c
        jz      loc_48ae16
        test    byte ptr [g_007da86c], 2
        jle     loc_48ae16
        mov     eax, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax+0x1c]
        mov     edi, dword ptr [eax]
        mov     edx, dword ptr [esi]
        push    0
        mov     ecx, esi
        and     edi, 0x3fff
        call    dword ptr [edx+0x4c]
        mov     dword ptr [esp+0x20], eax
loc_48ae16:
        mov     eax, dword ptr [esi]
        push    ebp
        mov     ecx, esi
        call    dword ptr [eax+0x1c]
        test    dword ptr [eax], 0x40000000
        jz      loc_48ae48
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+0x58]
        mov     edi, eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        shl     edi, 0x10
        call    dword ptr [eax+0x54]
        mov     edx, dword ptr [esi]
        push    0
        mov     ecx, esi
        or      edi, eax
        call    dword ptr [edx+0x50]
        mov     dword ptr [esp+0x20], eax
loc_48ae48:
        mov     edx, dword ptr [esi]
        push    edi
        lea     eax, [esp+0x20]
        push    eax
        xor     ebx, ebx
        mov     bx, word ptr [esi+0x54]
        push    ebp
        mov     ecx, esi
        call    dword ptr [edx+0x1c]
        push    eax
        mov     eax, dword ptr [esi]
        push    ebx
        push    ebp
        mov     ecx, esi
        call    dword ptr [eax+0x90]
        mov     ecx, dword ptr [esp+0x20]
        mov     edx, dword ptr [esp+0x30]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esp+0x2c]
        push    edx
        call    FUN_0048abf0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     8
loc_48ae87:
        mov     ebx, dword ptr [esp+0x20]
        mov     edx, dword ptr [esi]
        push    0
        lea     eax, [esp+0x20]
        push    eax
        xor     edi, edi
        mov     di, word ptr [esi+0xa]
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx+0x1c]
        push    eax
        mov     eax, dword ptr [esi]
        push    edi
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax+0x48]
        push    eax
        mov     ecx, ebp
        call    FUN_0048aa60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     8
    }
}
