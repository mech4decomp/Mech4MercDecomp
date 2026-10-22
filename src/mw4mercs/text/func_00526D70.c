/*
 * FUN_00526D70 (558 B) — Pilot file scanner with name extraction.
 *
 * Scans for pilot files (*.mw4) in Resource\Pilots\ directory,
 * extracts pilot names, stores results.
 * CFLAGS: /O1
 */

#include <windows.h>

/* Function declarations */
extern int __stdcall FUN_00412570(const char *str);
extern int __stdcall FUN_004125e0(int param1, int param2);
extern int __stdcall FUN_00412740(int param);
extern void __stdcall FUN_004084e0(void *ptr);
extern void *__stdcall FUN_004084d0(int size);
extern int __stdcall FUN_0041d890(int param1, int param2);
extern int __stdcall FUN_0041dc10(int param);
extern void __stdcall FUN_006f4230(void *ptr);
extern void *__stdcall FUN_006f3c80(int size, int flags);
extern int __stdcall FUN_00412780(int param);
extern int __stdcall FUN_004129c0(void);
extern int __stdcall FUN_00412950(int param);
extern int __stdcall FUN_00416b60(void *param);
extern void __stdcall FUN_0041dac0(int param);

/* Absolute data symbols (dword) referenced by the function */
extern int DAT_007dab40;
extern int DAT_007dab44;

__declspec(naked) void FUN_00526D70(void)
{
    
__asm {
sub     esp, 0x18
        mov     eax, dword ptr [esp + 0x1c]     ; param_1
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [eax + 0x4]      ; piVar10 = param_1->field_4
        mov     eax, dword ptr [eax + 0x8]      ; local_4 = param_1->field_8
        push    edi
        push    0x77a0c8                        ; "Resource\\Pilots\\"
        lea     ecx, [esp + 0x30]
        mov     dword ptr [esp + 0x28], eax     ; save local_4
        call    FUN_00412570
        mov     ecx, dword ptr [DAT_007dab44]   ; mov ecx, [0x007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [DAT_007dab40]   ; xor eax, [0x007dab40]
        mov     edx, dword ptr [eax + 0xc]
        mov     ecx, dword ptr [esp + 0x2c]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0xb0]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x28]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x30]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x20]     ; local_8
        xor     ebx, ebx
        cmp     eax, ebx
        jz      skip_refcount1
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

skip_refcount1:
        mov     edx, dword ptr [esp + 0x2c]
        push    0x77a40c                        ; "\\Games\\*.mw4"
        push    edx
        lea     ecx, [esp + 0x28]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x30]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x20]     ; local_8
        cmp     eax, ebx
        jz      skip_refcount2
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

skip_refcount2:
        push    0x38
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      alloc_failed
        mov     ecx, dword ptr [esp + 0x2c]
        push    0x1
        push    ecx
        mov     ecx, eax
        call    FUN_0041d890
        mov     edi, eax
        mov     dword ptr [esp + 0x10], edi
        jmp     short alloc_done

alloc_failed:
        mov     dword ptr [esp + 0x10], ebx
        mov     edi, ebx

alloc_done:
        mov     ecx, edi
        mov     dword ptr [esp + 0x1c], ebx     ; local_c = 0
        call    FUN_0041dc10
        mov     ebp, eax
        cmp     ebp, ebx
        jz      loop_done

        mov     dword ptr [esp + 0x18], esi     ; save piVar10
        jmp     short loop_body_start
loop_restore:
        mov     esi, dword ptr [esp + 0x18]     ; restore piVar10
loop_body_start:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      alloc_buf
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0x0

alloc_buf:
        push    0x0
        push    0x100
        call    FUN_006f3c80
        mov     ebx, eax
        push    ebp
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esi], ebx
        mov     dword ptr [esp + 0x18], 0x0
        call    FUN_00412780
        lea     ecx, [esp + 0x14]
        call    FUN_004129c0
        mov     ecx, eax
        call    FUN_00412950
        mov     edi, dword ptr [esp + 0x14]     ; string pointer
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebx
        mov     ebx, dword ptr [esp + 0x1c]     ; local_c
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
        mov     edi, dword ptr [esp + 0x18]     ; local_8
        inc     ebx
        add     edi, 0x4
        push    ebp
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x20], ebx     ; save local_c
        mov     dword ptr [esp + 0x1c], edi     ; save local_8
        call    FUN_00412570
        mov     ecx, dword ptr [esp + 0x10]     ; local_18
        lea     eax, [esp + 0x20]
        push    eax
        add     ecx, 0x1c
        call    FUN_00416b60
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x20]     ; local_8
        test    eax, eax
        jz      skip_refcount3
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

skip_refcount3:
        test    esi, esi
        jz      skip_vcall
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]                ; call dword ptr [edx] (virtual dispatch)

skip_vcall:
        mov     eax, dword ptr [esp + 0x14]     ; string pointer
        test    eax, eax
        jz      skip_refcount4
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

skip_refcount4:
        mov     ecx, dword ptr [esp + 0x10]     ; local_18
        call    FUN_0041dc10
        mov     ebp, eax
        test    ebp, ebp
        jnz     loop_restore

        mov     edi, dword ptr [esp + 0x10]     ; local_18

loop_done:
        test    edi, edi
        mov     eax, dword ptr [esp + 0x1c]     ; local_c
        mov     ecx, dword ptr [esp + 0x24]     ; local_4 pointer
        mov     dword ptr [ecx], eax
        jz      skip_destroy
        mov     ecx, edi
        call    FUN_0041dac0
        push    edi
        call    FUN_004084e0
        add     esp, 0x4

skip_destroy:
        mov     eax, dword ptr [esp + 0x2c]     ; param_1
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        jz      skip_refcount5
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount5
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

skip_refcount5:
        mov     eax, 0x1
        add     esp, 0x18
        ret     0x8
    }


}
