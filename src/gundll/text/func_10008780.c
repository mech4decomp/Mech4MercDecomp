/*
 * FUN_10008780 (179 B) - __thiscall, RET 0x4.  Object teardown/cleanup:
 * if flag@+0xe clear, optionally calls a method on the object@+0x20
 * (vtable[1]) to fetch a result, then if flag@+0xc clear, drains the
 * stream object@+0x8 (vtable[4] read loop), releases it (vtable[2]),
 * releases object@+0x20 (vtable[2]), re-installs vtable pointers
 * (0x100495d4/d0/cc/b8/a0) and frees via FUN_10001d60.  Returns ebp.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __fastcall FUN_10008780(void)
{
    __asm {
        push    ebp
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0xe]
        xor     ebp, ebp
        test    al, al
        jne     loc_1000882c
        mov     al, byte ptr [esp + 0xc]
        test    al, al
        jne     loc_100087a4
        mov     eax, dword ptr [esi + 0x20]
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 4]
        mov     ebp, eax
loc_100087a4:
        mov     al, byte ptr [esi + 0xc]
        test    al, al
        je      loc_100087b6
        mov     byte ptr [esi + 0xd], 1
        pop     esi
        mov     eax, ebp
        pop     ebp
        ret     4
loc_100087b6:
        mov     eax, dword ptr [esi + 8]
        test    eax, eax
        mov     byte ptr [esi + 0xe], 1
        je      loc_100087e4
        push    edi
        lea     edi, [esi + 0x10]
loc_100087c5:
        mov     eax, dword ptr [esi + 8]
        mov     edx, dword ptr [eax]
        push    edi
        push    eax
        call    dword ptr [edx + 0x10]
        test    eax, eax
        jge     loc_100087c5
        mov     eax, dword ptr [esi + 8]
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 8]
        mov     dword ptr [esi + 8], 0
        pop     edi
loc_100087e4:
        mov     eax, dword ptr [esi + 0x20]
        test    eax, eax
        je      loc_100087f8
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 8]
        mov     dword ptr [esi + 0x20], 0
loc_100087f8:
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        mov     dword ptr [esi], 0x100495d4
        mov     dword ptr [esi + 0x10], 0x100495d0
        mov     dword ptr [esi + 0x14], 0x100495cc
        mov     dword ptr [esi + 0x18], 0x100495b8
        mov     dword ptr [esi + 0x1c], 0x100495a0
        call    FUN_10001d60
        push    esi
        call    FUN_10001d60
        add     esp, 8
loc_1000882c:
        pop     esi
        mov     eax, ebp
        pop     ebp
        ret     4
    }
}
