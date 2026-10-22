/*
 * FUN_100327D0 (278 B) - __stdcall, RET 0x10.  SEH-guarded object
 * constructor/initializer.  Allocates a 0x3c-byte object (or uses a stack
 * buffer if arg1==0), fills it from args, then either allocates a 0x28-byte
 * object and initializes it via FUN_100340e0 (arg1!=0 path) or calls
 * FUN_100328f0 (arg1==0 path).  Returns E_OUTOFMEMORY (0x8007000e) on
 * failure, else 0.  SEH handler @0x10048a6b.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);    /* rel32 call (alloc) */
extern void __cdecl FUN_100328f0(void);    /* rel32 call (thiscall, this=ecx) */
extern void __cdecl FUN_100340e0(void);    /* rel32 call (thiscall, this=ecx) */

__declspec(naked) void __stdcall FUN_100327D0(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x10048a6b
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x3c
        push    ebp
        mov     ebp, dword ptr [esp + 0x5c]
        push    esi
        push    edi
        xor     edi, edi
        test    ebp, ebp
        je      L_1
        push    0x3c
        call    FUN_10001d50
        add     esp, 4
        mov     esi, eax
        jmp     L_2
    L_1:
        lea     esi, [esp + 0xc]
    L_2:
        test    esi, esi
        jne     L_3
        pop     edi
        pop     esi
        mov     eax, 0x8007000e
        pop     ebp
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x48
        ret     0x10
    L_3:
        test    ebp, ebp
        mov     al, byte ptr [esp + 0x5c]
        mov     ecx, dword ptr [esp + 0x60]
        mov     dword ptr [esi], 5
        mov     word ptr [esi + 8], 0
        mov     dword ptr [esi + 4], 0
        mov     byte ptr [esi + 0xc], al
        mov     dword ptr [esi + 0x10], ecx
        je      L_4
        push    0x28
        call    FUN_10001d50
        add     esp, 4
        mov     dword ptr [esp + 0x64], eax
        test    eax, eax
        mov     dword ptr [esp + 0x50], 0
        je      L_5
        mov     edx, dword ptr [esp + 0x58]
        test    edx, edx
        je      L_6
        lea     edi, [edx + 8]
        jmp     L_7
    L_6:
        xor     edi, edi
    L_7:
        mov     ecx, dword ptr [edx + 0x10]
        push    ecx
        add     edx, 0x40
        push    edx
        push    esi
        push    edi
        mov     ecx, eax
        call    FUN_100340e0
        test    eax, eax
        je      L_8
        lea     ecx, [eax + 0x18]
        jmp     L_9
    L_5:
        xor     eax, eax
    L_8:
        xor     ecx, ecx
    L_9:
        test    eax, eax
        mov     dword ptr [ebp], ecx
        jne     L_10
        pop     edi
        pop     esi
        mov     eax, 0x8007000e
        pop     ebp
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x48
        ret     0x10
    L_4:
        mov     ecx, dword ptr [esp + 0x58]
        push    esi
        call    FUN_100328f0
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x48
        ret     0x10
    L_10:
        mov     ecx, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebp
        mov     dword ptr fs:[0], ecx
        add     esp, 0x48
        ret     0x10
    }
}
