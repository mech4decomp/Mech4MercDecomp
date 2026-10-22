/*
 * FUN_005a7cb0 (339 B) — Complex initialization/update function.
 *
 * Allocates stack frame (0x84 bytes), performs various operations
 * including virtual calls, string/stream manipulation, and
 * XOR-encoded linked list traversal.
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004da920(void *ptr);
extern void __stdcall FUN_00534630(int a1, int a2, int a3, int a4);
extern void __stdcall FUN_004ea0f0(void *ptr);
extern void __stdcall FUN_00428850(void *ptr);
extern void __stdcall FUN_0041e690(void *a, void *b, int c);
extern void *__stdcall FUN_004cec10(void);
extern void *__stdcall FUN_004d9910(void *a, void *b, int c);
extern void __stdcall FUN_0041fcb0(void);
extern void __stdcall FUN_0041fcd0(void *ptr);
extern void __stdcall FUN_0041e710(void);

__declspec(naked) void __fastcall FUN_005a7cb0(void)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern int DAT_007db098;
extern int DAT_007dab40;
extern int DAT_007dab44;
__asm {
sub     esp, 0x84
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x78]
        lea     ecx, [ebx + 0x78]
        push    esi
        call    dword ptr [eax + 0x4]

        mov     cx, word ptr [eax + 0x34]
        cmp cx, word ptr [DAT_007db0ac]
        lea     esi, [eax + 0x34]
        jnz     not_equal

        mov     dx, word ptr [esi + 0x2]
        cmp dx, word ptr [DAT_007db0ae]
        jz      done

not_equal:
        push    edi
        push    esi
        call    FUN_004da920
        add     esp, 0x4

        push    0x0
        push    0x2
        push    0x60
        push    0x2
        lea     ecx, [esp + 0x20]
        mov     edi, eax
        call    FUN_00534630

        push    0x7dc694
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x24], edi
        mov     dword ptr [esp + 0x28], 0x2
        call    FUN_004ea0f0

        mov     eax, dword ptr [ebx + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x30]
        call    FUN_00428850

        mov     cx, word ptr [esi]
        mov     eax, dword ptr [esp + 0x10]
        mov     dx, word ptr [esi + 0x2]
        push    0x0
        mov     word ptr [esp + 0x68], cx
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x7c]
        mov     dword ptr [esp + 0x68], 0x2
        mov     dword ptr [esp + 0x6c], 0x0
        mov     word ptr [esp + 0x72], dx
        mov     dword ptr [esp + 0x74], 0x0
        mov     dword ptr [esp + 0x78], 0xffffffff
        call    FUN_0041e690

        mov ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10

        mov     dl, byte ptr [eax]
        mov     byte ptr [esp + 0xc], dl
        mov     ax, word ptr [eax + 0x2]
        push    0x0
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x78]
        push    edx
        mov     word ptr [esp + 0x1a], ax
        call    FUN_004d9910

        mov edx, dword ptr [DAT_007dab40]
        mov     esi, eax
        mov eax, dword ptr [DAT_007dab44]

        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x1c]
        lea     eax, [ecx + 0x1c]
        add     esp, 0xc
        xor     edx, 0x85739531
        jz      skip_virtual_call

walk_loop:
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax]
        push    esi
        mov     ecx, eax
        call    dword ptr [edx + 0x28]

skip_virtual_call:
        lea     edi, [ebx + 0x180]
        mov     ecx, edi
        call    FUN_0041fcb0

        push    esi
        mov     ecx, edi
        call    FUN_0041fcd0

        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax + 0x48]

        lea     ecx, [esp + 0x70]
        call    FUN_0041e710
        pop     edi

done:
        pop     esi
        pop     ebx
        add     esp, 0x84
        ret
    }


}
