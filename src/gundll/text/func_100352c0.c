/*
 * FUN_100352C0 (326 B) - __stdcall, RET 0x20.  SEH-guarded object
 * constructor/initializer.  Calls a virtual method on arg0's object, then
 * allocates a 0x3c-byte object (or uses a stack buffer if arg6==0), fills
 * it from args (including two 16-byte sub-structures copied from arg4/arg5),
 * then either allocates a 0x28-byte object and initializes it via
 * FUN_100340e0 (arg6!=0 path) or calls FUN_100360a0 (arg6==0 path).
 * Returns E_OUTOFMEMORY (0x8007000e) on failure, else 0.
 * SEH handler @0x10048bab.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);    /* rel32 call (alloc) */
extern void __cdecl FUN_100340e0(void);    /* rel32 call (thiscall, this=ecx) */
extern void __cdecl FUN_100360a0(void);    /* rel32 call (thiscall, this=ecx) */

__declspec(naked) void __stdcall FUN_100352C0(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        push    -1
        push    0x10048bab
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x3c
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x58]
        mov     eax, dword ptr [edi]
        push    0
        push    edi
        call    dword ptr [eax + 0xc]
        mov     ebp, dword ptr [esp + 0x70]
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
        ret     0x20
    L_3:
        test    ebp, ebp
        mov     ecx, dword ptr [esp + 0x5c]
        mov     eax, dword ptr [esp + 0x60]
        mov     dword ptr [esi + 0xc], ecx
        mov     cx, word ptr [esp + 0x64]
        mov     dword ptr [esi], 2
        mov     word ptr [esi + 8], 0
        mov     dword ptr [esi + 4], 0
        lea     edx, [esi + 0x34]
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [esp + 0x68]
        mov     word ptr [edx + 4], cx
        mov     ecx, dword ptr [eax]
        lea     edx, [esi + 0x10]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [eax + 4]
        mov     dword ptr [edx + 4], ecx
        mov     ecx, dword ptr [eax + 8]
        mov     dword ptr [edx + 8], ecx
        mov     eax, dword ptr [eax + 0xc]
        mov     dword ptr [edx + 0xc], eax
        mov     edx, dword ptr [esp + 0x6c]
        mov     eax, dword ptr [edx]
        lea     ecx, [esi + 0x20]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [edx + 4]
        mov     dword ptr [ecx + 4], eax
        mov     eax, dword ptr [edx + 8]
        mov     dword ptr [ecx + 8], eax
        mov     edx, dword ptr [edx + 0xc]
        mov     eax, dword ptr [esp + 0x74]
        mov     dword ptr [ecx + 0xc], edx
        mov     dword ptr [esi + 0x30], eax
        je      L_4
        push    0x28
        call    FUN_10001d50
        add     esp, 4
        mov     dword ptr [esp + 0x58], eax
        test    eax, eax
        mov     dword ptr [esp + 0x50], 0
        je      L_5
        mov     ecx, dword ptr [edi + 0x10]
        push    ecx
        push    0
        push    esi
        add     edi, 8
        push    edi
        mov     ecx, eax
        call    FUN_100340e0
        test    eax, eax
        je      L_6
        lea     ecx, [eax + 0x18]
        jmp     L_7
    L_5:
        xor     eax, eax
    L_6:
        xor     ecx, ecx
    L_7:
        test    eax, eax
        mov     dword ptr [ebp], ecx
        jne     L_8
        pop     edi
        pop     esi
        mov     eax, 0x8007000e
        pop     ebp
        mov     ecx, dword ptr [esp + 0x3c]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x48
        ret     0x20
    L_4:
        push    esi
        mov     ecx, edi
        call    FUN_100360a0
    L_8:
        mov     ecx, dword ptr [esp + 0x48]
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebp
        mov     dword ptr fs:[0], ecx
        add     esp, 0x48
        ret     0x20
    }
}
