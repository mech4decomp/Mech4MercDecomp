/*
 * FUN_10008340 (163 B) - __thiscall (this in ecx), RET 0x4. Object teardown:
 * if [this+0xe] already set, returns immediately. Otherwise releases the
 * object at +0x1c (virtual calls via its vtable: +0x40, +0x20), drains the
 * list at +0x08 (virtual +0x10 loop, then +0x08), releases +0x1c via
 * vtable +0x38, then shared_free(this) via FUN_10001d60. Returns ebp
 * (result of the +0x20 virtual call).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_10008340(void)
{
    __asm {
        push    ebp
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0xe]
        xor     ebp, ebp
        test    al, al
        jne     L_dc
        mov     al, byte ptr [esp + 0xc]
        test    al, al
        jne     L_7e
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        je      L_7e
        mov     ecx, dword ptr [esi + 0x20]
        test    ecx, ecx
        je      L_71
        mov     edx, dword ptr [eax]
        push    ecx
        push    eax
        call    dword ptr [edx + 0x40]
        mov     dword ptr [esi + 0x20], ebp
L_71:
        mov     eax, dword ptr [esi + 0x1c]
        mov     ecx, dword ptr [eax]
        push    0
        push    eax
        call    dword ptr [ecx + 0x20]
        mov     ebp, eax
L_7e:
        mov     al, byte ptr [esi + 0xc]
        test    al, al
        je      L_90
        mov     byte ptr [esi + 0xd], 1
        pop     esi
        mov     eax, ebp
        pop     ebp
        ret     4
L_90:
        mov     eax, dword ptr [esi + 8]
        test    eax, eax
        mov     byte ptr [esi + 0xe], 1
        je      L_bf
        push    edi
        lea     edi, [esi + 0x14]
        nop
L_a0:
        mov     eax, dword ptr [esi + 8]
        mov     edx, dword ptr [eax]
        push    edi
        push    eax
        call    dword ptr [edx + 0x10]
        test    eax, eax
        jge     L_a0
        mov     eax, dword ptr [esi + 8]
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
        mov     dword ptr [esi + 8], 0
        pop     edi
L_bf:
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        je      L_d3
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x38]
        mov     dword ptr [esi + 0x1c], 0
L_d3:
        push    esi
        call    FUN_10001d60
        add     esp, 4
L_dc:
        pop     esi
        mov     eax, ebp
        pop     ebp
        ret     4
    }
}
