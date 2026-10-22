/*
 * FUN_00755CC0 (130 B) — __thiscall (ECX = this), no stack args, RET.
 *
 * Enters a critical section (0x858ac8), calls FUN_00757cb0(this->vtable,
 * &local), conditionally calls FUN_00757cf0, then FUN_00756c00(this),
 * sets some this->byte flags, and calls FUN_00757f00. Leaves the CS.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00757cb0(void *a, void *b);
extern void __stdcall FUN_00757cf0(void *a, int b);
extern void FUN_00756c00(void);
extern void __stdcall FUN_00757f00(void *a, int b, int c, int d);

extern unsigned char g_858ac8;
extern void (__stdcall *g_76b110)(void *);
extern void (__stdcall *g_76b100)(void *);
extern unsigned char g_87dd0a;

__declspec(naked) void FUN_00755CC0(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        push    offset g_858ac8
        mov     esi, ecx
        call    dword ptr [g_76b110]
        mov     edi, dword ptr [esi]
        lea     eax, [esp + 0x8]
        push    eax
        push    edi
        call    FUN_00757cb0
        mov     al, byte ptr [esi + 0x83]
        test    al, al
        jnz     L1
        test    byte ptr [esp + 0x8], 0x1
        jnz     L1
        push    0x0
        push    edi
        call    FUN_00757cf0
L1:
        mov     ecx, esi
        call    FUN_00756c00
        mov     dl, byte ptr [esi + 0x80]
        xor     ecx, ecx
        test    dl, dl
        mov     edx, dword ptr [esi]
        setnz   cl
        mov     byte ptr [esi + 0x83], 0x0
        mov     byte ptr [esi + 0x82], 0x1
        mov     byte ptr [g_87dd0a], 0x1
        push    ecx
        push    0x0
        push    0x0
        push    edx
        call    FUN_00757f00
        push    offset g_858ac8
        mov     byte ptr [g_87dd0a], 0x0
        call    dword ptr [g_76b100]
        pop     edi
        pop     esi
        pop     ecx
        ret
    }
}
