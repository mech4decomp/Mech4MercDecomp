/*
 * FUN_100349e0 (200 B) - __fastcall. SEH-guarded teardown: walks a linked
 * list at +0x1c, calls a virtual method (offset 0) on each node's +8 object,
 * unlinks and frees nodes via FUN_10001d60, then frees the list head.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10048b2b(void); /* SEH handler address (push offset) */
extern void __cdecl FUN_10001d60(void); /* __cdecl(1) rel32 call */

__declspec(naked) void FUN_100349e0(void)
{
    __asm {
        push    -1
        push    offset FUN_10048b2b
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp + 0xc], esi
        mov     eax, dword ptr [esi + 0x20]
        test    eax, eax
        mov     dword ptr [esp + 0x18], 0
        jbe     L_a4c
        mov     edi, edi
L_a10:
        mov     eax, dword ptr [esi + 0x1c]
        mov     ecx, dword ptr [eax]
        mov     ecx, dword ptr [ecx + 8]
        test    ecx, ecx
        jz      L_a22
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_a22:
        mov     eax, dword ptr [esi + 0x1c]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [eax + 4]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx], edx
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 4]
        push    eax
        mov     dword ptr [ecx + 4], edx
        call    FUN_10001d60
        mov     ecx, dword ptr [esi + 0x20]
        add     esp, 4
        dec     ecx
        mov     eax, ecx
        test    eax, eax
        mov     dword ptr [esi + 0x20], ecx
        ja      L_a10
L_a4c:
        mov     ebx, dword ptr [esi + 0x1c]
        mov     edi, dword ptr [ebx]
        cmp     edi, ebx
        jz      L_a7c
L_a55:
        mov     eax, edi
        mov     ecx, dword ptr [eax + 4]
        mov     edx, dword ptr [eax]
        mov     edi, dword ptr [edi]
        mov     dword ptr [ecx], edx
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 4]
        push    eax
        mov     dword ptr [ecx + 4], edx
        call    FUN_10001d60
        mov     ecx, dword ptr [esi + 0x20]
        add     esp, 4
        dec     ecx
        cmp     edi, ebx
        mov     dword ptr [esi + 0x20], ecx
        jnz     L_a55
L_a7c:
        mov     eax, dword ptr [esi + 0x1c]
        push    eax
        call    FUN_10001d60
        mov     ecx, dword ptr [esp + 0x14]
        add     esp, 4
        pop     edi
        mov     dword ptr [esi + 0x1c], 0
        mov     dword ptr [esi + 0x20], 0
        pop     esi
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
