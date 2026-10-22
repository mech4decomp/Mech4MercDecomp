/*
 * FUN_004d7e00 (77 B) — __stdcall connect wrapper. Builds a sockaddr via
 * FUN_004d7e50; if that fails returns 4, else connects the socket and returns
 * 4 on failure, 0 on success.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d7e50(void);
extern void __cdecl FUN_0075dfd4(void);   /* connect */

__declspec(naked) void FUN_004d7e00(void)
{
    __asm {
        mov     edx, dword ptr [esp+0xc]
        sub     esp, 0x10
        push    0
        lea     eax, [esp+4]
        push    eax
        mov     eax, dword ptr [esp+0x20]
        push    edx
        push    eax
        call    FUN_004d7e50
        test    eax, eax
        jnz     do_connect
        mov     eax, 4
        add     esp, 0x10
        ret     0xc
do_connect:
        mov     edx, dword ptr [esp+0x14]
        push    0x10
        lea     ecx, [esp+4]
        push    ecx
        push    edx
        call    FUN_0075dfd4
        xor     ecx, ecx
        cmp     eax, -1
        setnz   cl
        dec     ecx
        and     ecx, 4
        mov     eax, ecx
        add     esp, 0x10
        ret     0xc
    }
}
