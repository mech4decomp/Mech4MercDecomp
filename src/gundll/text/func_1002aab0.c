/*
 * FUN_1002AAB0 (230 B) - __stdcall, RET 0x10 (4 args).
 * Registration/parse helper. Calls FUN_1001ca30(this,arg2,0x1004a5bc,
 * arg3,&local0); then FUN_1002af80(this->+0x1c,&local1) and
 * FUN_1002af80(this->+0x24,&local2); then FUN_1001c660 with a 10-arg
 * buffer-advance call. On success stores arg3+local0 into *arg4.
 * Frees local1/local2 via FUN_10001d60 if they differ from this->+0x1c/
 * +0x24. Returns the last HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_1001ca30(void);   /* rel32 call */
extern void __stdcall FUN_1002af80(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);     /* rel32 call */
extern void __cdecl FUN_10001d60(void);     /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_1002AAB0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [esp + 0x1c]
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        push    esi
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    0x1004a5bc
        push    ebp
        push    edi
        call    FUN_1001ca30
        mov     esi, eax
        test    esi, esi
        jl      L_ab66
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x1c]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x30], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_ab66
        mov     ecx, dword ptr [edi + 0x24]
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_ab66
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi + 0x20]
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        push    0x10049c34
        push    eax
        push    0x10049bf8
        push    ecx
        push    0x10049b60
        push    0x10050398
        lea     edx, [esp + 0x2c]
        push    edx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x28
        test    esi, esi
        jl      L_ab66
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esp + 0x2c]
        add     ecx, eax
        mov     dword ptr [edx], ecx
    L_ab66:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x1c]
        je      L_ab78
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_ab78:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [edi + 0x24]
        je      L_ab8a
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_ab8a:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret     0x10
    }
}
