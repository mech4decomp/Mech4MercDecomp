/*
 * FUN_100351A0 (255 B) - __stdcall, RET 0x18.  SEH-guarded object
 * constructor/initializer.  Allocates a 0x3c-byte object (or uses a stack
 * buffer if arg3==0), fills it from args, then either allocates a 0x28-byte
 * object and initializes it via FUN_100340e0 (arg3!=0 path) or calls
 * FUN_10035ef0 (arg3==0 path).  Returns E_OUTOFMEMORY (0x8007000e) on
 * failure, else 0.  SEH handler @0x10048b8b.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);    /* rel32 call (alloc) */
extern void __cdecl FUN_100340e0(void);    /* rel32 call (thiscall, this=ecx) */
extern void __cdecl FUN_10035ef0(void);    /* rel32 call (thiscall, this=ecx) */

__declspec(naked) void __stdcall FUN_100351A0(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x10048b8b
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x3c
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x60]
        xor     ebx, ebx
        cmp     ebp, ebx
        push    esi
        je      L_1
        push    0x3c
        call    FUN_10001d50
        add     esp, 4
        mov     esi, eax
        jmp     L_2
    L_1:
        lea     esi, [esp + 0xc]
    L_2:
        cmp     esi, ebx
        jne     L_3
        pop     esi
        pop     ebp
        mov     eax, 0x8007000e
        pop     ebx
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x48
        ret     0x18
    L_3:
        cmp     ebp, ebx
        mov     eax, dword ptr [esp + 0x5c]
        mov     ecx, dword ptr [esp + 0x60]
        mov     edx, dword ptr [esp + 0x68]
        mov     dword ptr [esi + 0xc], eax
        mov     eax, dword ptr [esp + 0x6c]
        mov     dword ptr [esi], ebx
        mov     word ptr [esi + 8], bx
        mov     dword ptr [esi + 4], ebx
        mov     dword ptr [esi + 0x10], ecx
        mov     dword ptr [esi + 0x14], edx
        mov     dword ptr [esi + 0x18], eax
        je      L_4
        push    0x28
        call    FUN_10001d50
        add     esp, 4
        mov     dword ptr [esp + 0x64], eax
        cmp     eax, ebx
        mov     dword ptr [esp + 0x50], ebx
        je      L_5
        push    edi
        mov     edi, dword ptr [esp + 0x5c]
        cmp     edi, ebx
        je      L_6
        lea     edx, [edi + 8]
        jmp     L_7
    L_6:
        xor     edx, edx
    L_7:
        mov     ecx, dword ptr [edi + 0x10]
        push    ecx
        push    ebx
        push    esi
        push    edx
        mov     ecx, eax
        call    FUN_100340e0
        cmp     eax, ebx
        pop     edi
        je      L_8
        lea     ecx, [eax + 0x18]
        jmp     L_9
    L_5:
        xor     eax, eax
    L_8:
        xor     ecx, ecx
    L_9:
        cmp     eax, ebx
        mov     dword ptr [ebp], ecx
        jne     L_10
        pop     esi
        pop     ebp
        mov     eax, 0x8007000e
        pop     ebx
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x48
        ret     0x18
    L_4:
        mov     ecx, dword ptr [esp + 0x58]
        push    esi
        call    FUN_10035ef0
    L_10:
        mov     ecx, dword ptr [esp + 0x48]
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x48
        ret     0x18
    }
}
