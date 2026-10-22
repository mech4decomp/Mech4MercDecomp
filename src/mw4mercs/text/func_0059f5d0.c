/*
 * FUN_0059f5d0 (610 B) — String processing function.
 * Parses configuration strings, calls virtual methods.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 */

extern void * __stdcall FUN_0040ed60(void *);
extern void * __stdcall FUN_00411a80(void *, void *);
extern void __stdcall FUN_004c41d0(void *, void *);
extern void __stdcall FUN_00411cb0(void *, void *, void *, int);
extern void __stdcall FUN_00417a40(void *);
extern void * __stdcall FUN_0040c0e0(void *);
extern void __stdcall FUN_00412570(void *, void *);
extern void __stdcall FUN_004d2000(void *, void *, int);
extern void __stdcall FUN_004125e0(void *, void *, void *);
extern void __stdcall FUN_00412740(void *, void *);
extern void __stdcall FUN_0040d9b0(void *);
extern void __stdcall FUN_00412a50(void *, void *);
extern void __stdcall FUN_004d21c0(void *);
extern void __stdcall FUN_004084e0(void *);
extern void __stdcall FUN_00417980(void *);

__declspec(naked) void __stdcall FUN_0059f5d0(void)
{
    __asm {
        sub     esp, 0xb0
        mov     ecx, dword ptr [esp + 0xb8]
        push    ebx
        push    esi
        push    edi
        push    0x783a30
        call    FUN_0040ed60
        mov     edi, eax
        push    0x783a28
        mov     ecx, edi
        call    FUN_00411a80
        mov     ebx, eax
        push    ebx
        lea     ecx, [esp + 0x2c]
        call    FUN_004c41d0
        push    1
        lea     eax, [esp + 0x28]
        push    eax
        push    0x783a20
        mov     ecx, edi
        mov     dword ptr [esp + 0x34], 0x76cc9c
        mov     dword ptr [esp + 0x28], 0
        call    FUN_00411cb0
        push    1
        lea     ecx, [esp + 0x24]
        push    ecx
        push    0x783a18
        mov     ecx, edi
        call    FUN_00411cb0
        push    0
        lea     edx, [esp + 0x20]
        push    edx
        push    0x783a08
        mov     ecx, edi
        call    FUN_00411cb0
        mov     esi, dword ptr [esp + 0xc0]
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], 0
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     cl, byte ptr [esp + 0x20]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x17]
        mov     byte ptr [esp + 0x17], cl
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, ebx
        call    FUN_00417a40
        mov     edx, dword ptr [esi]
        mov     dword ptr [esp + 0x14], eax
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ecx, [esp + 0x28]
        call    FUN_0040c0e0
        test    eax, eax
        je      label_outer_loop_done

label_outer_loop:
        mov     ecx, dword ptr [eax + 0x18]
        push    ecx
        lea     ecx, [esp + 0x10]
        call    FUN_00412570
        mov     edx, dword ptr [esp + 0xc]
        push    0
        push    edx
        lea     ecx, [esp + 0x80]
        call    FUN_004d2000
        mov     eax, dword ptr [esp + 0xc]
        push    0x7839fc
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        lea     ecx, [esp + 0x14]
        call    FUN_0040d9b0
        mov     ecx, dword ptr [esp + 0xc]
        push    0
        push    ecx
        lea     ecx, [esp + 0x3c]
        call    FUN_004d2000
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x78]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0xbc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    esi
        call    FUN_00412a50
        add     esp, 8
        lea     ecx, [esp + 0x34]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x78]
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      label_outer_loop_continue
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     label_outer_loop_continue
        push    eax
        call    FUN_004084e0
        add     esp, 4

label_outer_loop_continue:
        lea     ecx, [esp + 0x28]
        call    FUN_0040c0e0
        test    eax, eax
        jne     label_outer_loop

label_outer_loop_done:
        push    0x7838ec
        mov     ecx, edi
        call    FUN_00411a80
        mov     edi, dword ptr [eax]
        mov     dword ptr [esp + 0x14], eax

label_inner_loop:
        test    edi, edi
        je      label_inner_loop_done
        mov     eax, dword ptr [edi]
        test    eax, eax
        mov     edi, dword ptr [edi + 4]
        je      label_inner_loop_done
        mov     edx, dword ptr [eax + 0x18]
        push    edx
        lea     ecx, [esp + 0x10]
        call    FUN_00412570
        lea     eax, [esp + 0xc]
        push    eax
        push    esi
        call    FUN_00412a50
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 8
        test    eax, eax
        je      label_inner_loop
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     label_inner_loop
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     label_inner_loop

label_inner_loop_done:
        mov     ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        je      label_free_ebx
        call    FUN_00417980
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        call    FUN_004084e0
        add     esp, 4

label_free_ebx:
        test    ebx, ebx
        je      label_done
        mov     ecx, ebx
        call    FUN_00417980
        push    ebx
        call    FUN_004084e0
        add     esp, 4

label_done:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xb0
        ret
    }
}
