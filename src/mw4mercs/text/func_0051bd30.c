/*
 * FUN_0051BD30 (193 B) — constructs an object via a lookup chain, copying a
 * 16-bit pair and returning a handle.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_00595b60(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00592a70(void);
extern void __cdecl FUN_00593ca0(void);
extern void __cdecl FUN_004d21c0(void);

__declspec(naked) void FUN_0051BD30(void)
{
    __asm {
        sub     esp, 0x44
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [esp+0x50]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [eax+0x44]
        push    esi
        push    edi
        xor     edx, 0x85739531
        push    ecx
        mov     ecx, dword ptr [edx+0x34]
        call    FUN_00595b60
        mov     cx, word ptr [eax+0x34]
        add     eax, 0x34
        mov     word ptr [esp+0x58], cx
        mov     dx, word ptr [eax+2]
        push    1
        lea     eax, [esp+0x5c]
        push    eax
        lea     ecx, [esp+0x10]
        mov     word ptr [esp+0x62], dx
        call    FUN_004d1f80
        push    0x9c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_bda4
        lea     ecx, [esp+8]
        push    ecx
        mov     ecx, eax
        call    FUN_00592a70
        mov     esi, eax
        jmp     L_bda6
    L_bda4:
        xor     esi, esi
    L_bda6:
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax+0x44]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx+0x34]
        mov     eax, dword ptr [edx+0x48]
        mov     ecx, dword ptr [eax+0x50]
        mov     dword ptr [esi+0x40], ecx
        mov     ecx, esi
        call    FUN_00593ca0
        test    esi, esi
        mov     edi, eax
        je      L_bdde
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx]
    L_bdde:
        lea     ecx, [esp+8]
        call    FUN_004d21c0
        mov     eax, edi
        pop     edi
        pop     esi
        add     esp, 0x44
        ret     0xc
    }
}
