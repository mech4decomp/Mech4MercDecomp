/*
 * FUN_00574a00 (458 B) — Object query/filter handler.
 *
 * Iterates through objects, applies filters, and collects results.
 *
 * __cdecl (params on stack), returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00580600(void);
extern void __cdecl FUN_00580e40(int param1, void *param2);
extern void __cdecl FUN_00566c80(void);
extern int __cdecl FUN_0064e600(int param);
extern int __cdecl FUN_0064e540(int param);
extern int __cdecl FUN_0064e100(void);
extern int __stdcall FUN_004fcb30(int param);
extern int __cdecl FUN_00415230(int param);
extern void __cdecl FUN_00580af0(void *param);
extern void __cdecl FUN_00580520(void *param);
extern void __cdecl FUN_00580670(void *param1, void *param2, int param3);
extern void __cdecl FUN_0065d1c0(int param1, void *param2);
extern void __cdecl FUN_00580620(void *param1, int param2);
extern void __cdecl FUN_004084e0(void *param);

__declspec(naked) void __cdecl FUN_00574a00(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f268c;
extern int DAT_007f23b0;
__asm {
sub     esp, 0x20
        push    ebp
        push    esi
        push    edi
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x13]
        push    ecx
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x28], 0
        mov     dword ptr [esp + 0x2c], 0
        mov     dword ptr [esp + 0x18], 0
        call    FUN_00580600
        mov     esi, dword ptr [esp + 0x30]
        test    esi, 0xf00000
        jz      l_no_flag
        lea     edx, [esp + 0x20]
        push    edx
        add     esi, 0xff100000
        push    esi
        call    FUN_00580e40
        add     esp, 8
        jmp     l_collect
l_no_flag:
        call    FUN_00566c80
        mov     edi, eax
        push    esi
        mov     ecx, edi
        call    FUN_0064e600
        test    al, al
        jz      l_collect
        push    esi
        mov     ecx, edi
        call    FUN_0064e540
        mov     ebp, eax
        mov     ecx, ebp
        call    FUN_0064e100
        mov     edi, dword ptr [eax]
        mov     ecx, ebp
        call    FUN_0064e100
        cmp     edi, dword ptr [eax + 4]
        jz      l_collect
l_loop:
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [edi]
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        test    esi, esi
        jz      l_next
        mov     edx, dword ptr [esi + 0x10]
        shr     edx, 0x13
        test    dl, 1
        jnz     l_next
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     l_next
        mov     esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        jz      l_next
        mov eax, dword ptr [DAT_007f23b0]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     l_next
        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jnz     l_next
        lea     eax, [esp + 0x30]
        push    eax
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x34], esi
        call    FUN_00580af0
l_next:
        mov     ecx, ebp
        add     edi, 4
        call    FUN_0064e100
        cmp     edi, dword ptr [eax + 4]
        jnz     l_loop
l_collect:
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_00580520
        mov     esi, dword ptr [esp + 0x20]
        cmp     esi, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x18]
        jz      l_done_collect
l_collect_loop:
        mov     edx, dword ptr [esi]
        mov     eax, dword ptr [edx + 0x170]
        mov     edx, dword ptr [esp + 0x1c]
        add     eax, 0x30
        cmp     ecx, edx
        jz      l_use_push
        test    ecx, ecx
        jz      l_skip_store
        mov     eax, dword ptr [eax]
        mov     dword ptr [ecx], eax
        mov     ecx, dword ptr [esp + 0x18]
l_skip_store:
        add     ecx, 4
        mov     dword ptr [esp + 0x18], ecx
        jmp     l_continue
l_use_push:
        push    1
        push    eax
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_00580670
        mov     ecx, dword ptr [esp + 0x18]
l_continue:
        mov     eax, dword ptr [esp + 0x24]
        add     esi, 4
        cmp     esi, eax
        jnz     l_collect_loop
l_done_collect:
        mov     eax, dword ptr [esp + 0x14]
        pop     edi
        sub     ecx, eax
        sar     ecx, 2
        pop     esi
        pop     ebp
        jz      l_no_count
        mov     edx, dword ptr [esp + 0x28]
        lea     ecx, [esp + 0x8]
        push    ecx
        push    edx
        call    FUN_0065d1c0
        mov     eax, dword ptr [esp + 0x10]
        add     esp, 8
l_no_count:
        mov     ecx, dword ptr [esp + 0x10]
        sub     ecx, eax
        sar     ecx, 2
        push    ecx
        push    eax
        call    FUN_00580620
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 8
        test    eax, eax
        jz      l_no_free
        push    eax
        call    FUN_004084e0
        add     esp, 4
l_no_free:
        add     esp, 0x20
        ret
    }


}
