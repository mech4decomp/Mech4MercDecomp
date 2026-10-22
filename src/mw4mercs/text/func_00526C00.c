/*
 * FUN_00526C00 (363 B) — Pilot file scanner.
 *
 * Scans for pilot files (*.mw4) in Resource\Pilots\ directory.
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
extern int __stdcall FUN_00416b60(void *param);
extern void __stdcall FUN_0041dac0(int param);

/* Absolute data symbols (dword) referenced by the function */
extern int DAT_007dab40;
extern int DAT_007dab44;

__declspec(naked) void FUN_00526C00(void)
{
    
__asm {
sub     esp, 0x8
        mov     eax, dword ptr [esp + 0xc]     ; param_1
        mov     ecx, dword ptr [eax + 0x4]
        push    ebx
        push    ebp
        push    edi
        mov     dword ptr [esp + 0x10], ecx    ; local_4 = param_1->field_4
        push    0x77a0c8                       ; "Resource\\Pilots\\"
        lea     ecx, [esp + 0x1c]
        call    FUN_00412570
        mov     edx, dword ptr [DAT_007dab44]  ; mov edx, [0x007dab44]
        mov     eax, dword ptr [edx]
        mov     ebp, dword ptr [DAT_007dab40]  ; mov ebp, [0x007dab40]
        mov     edx, dword ptr [esp + 0x18]
        xor     eax, ebp
        mov     eax, dword ptr [eax + 0xc]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0xb0]
        push    ecx
        push    edx
        lea     ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0xc]     ; local_8
        test    eax, eax
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
        mov     eax, dword ptr [esp + 0x18]
        push    0x77a40c                       ; "\\Games\\*.mw4"
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0xc]     ; local_8
        test    eax, eax
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
        test    eax, eax
        jz      alloc_failed
        mov     ecx, dword ptr [esp + 0x18]
        push    0x1
        push    ecx
        mov     ecx, eax
        call    FUN_0041d890
        mov     edi, eax
        jmp     short alloc_done

alloc_failed:
        xor     edi, edi

alloc_done:
        mov     ecx, edi
        xor     ebx, ebx
        call    FUN_0041dc10
        test    eax, eax
        jz      loop_done

        push    esi
        lea     ebp, [edi + 0x1c]

loop_start:
        push    eax
        lea     ecx, [esp + 0x14]
        inc     ebx
        call    FUN_00412570
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, ebp
        call    FUN_00416b60
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x10]    ; local_8
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
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax]                ; call dword ptr [eax] (virtual dispatch)

skip_vcall:
        mov     ecx, edi
        call    FUN_0041dc10
        test    eax, eax
        jnz     loop_start

        pop     esi

loop_done:
        test    edi, edi
        mov     ecx, dword ptr [esp + 0x10]    ; local_4
        mov     dword ptr [ecx], ebx
        jz      skip_destroy
        mov     ecx, edi
        call    FUN_0041dac0
        push    edi
        call    FUN_004084e0
        add     esp, 0x4

skip_destroy:
        mov     eax, dword ptr [esp + 0x18]    ; param_1
        test    eax, eax
        pop     edi
        pop     ebp
        pop     ebx
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
        mov     eax, 0x1
        add     esp, 0x8
        ret     0x8
    }


}
