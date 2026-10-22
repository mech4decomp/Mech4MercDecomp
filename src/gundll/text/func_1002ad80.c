/*
 * FUN_1002AD80 (178 B) - __stdcall, RET 0x10 (4 args).
 * Registration/parse helper. Calls FUN_1001c7a0(this,arg2,0x10049ffc,
 * arg3,&local0); then FUN_1002af80(this->+0x20,&local1); then
 * FUN_1001c660 with an 8-arg buffer-advance call. On success stores
 * arg3+local0 into *arg4. Frees local1 via FUN_10001d60 if it differs
 * from this->+0x20. Returns the last HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_1001c7a0(void);   /* rel32 call */
extern void __stdcall FUN_1002af80(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);     /* rel32 call */
extern void __cdecl FUN_10001d60(void);     /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_1002AD80(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        xor     eax, eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    0x10049ffc
        push    ebp
        push    edi
        call    FUN_1001c7a0
        mov     esi, eax
        test    esi, esi
        jl      L_ae14
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x20]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_ae14
        mov     eax, dword ptr [edi + 0x24]
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    0x10049c94
        push    ecx
        push    0x10049b60
        push    0x100503d8
        lea     edx, [esp + 0x24]
        push    edx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x20
        test    esi, esi
        jl      L_ae14
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
        add     ecx, eax
        mov     dword ptr [edx], ecx
    L_ae14:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x20]
        je      L_ae26
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_ae26:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x10
    }
}
