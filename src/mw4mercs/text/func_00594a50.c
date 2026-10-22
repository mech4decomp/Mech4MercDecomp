/*
 * FUN_00594A50 (246 B) — __thiscall function.
 * Iterates over a collection, comparing values against a threshold,
 * and either stores a string or calls a callback.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_00594A50(void)
{
    

extern void __cdecl FUN_00707e66(void);
extern void __cdecl FUN_100416ba8(void);
extern void __cdecl FUN_100416cd7(void);
extern void __cdecl FUN_100416ca9(void);
extern void __cdecl FUN_100416cde(void);
extern int DAT_007dd268;
extern void __cdecl FUN_10051ebfa(void);
extern void __cdecl FUN_004084E0(void);
extern int DAT_00782e00;
extern void __cdecl FUN_1004169c4(void);
extern void __cdecl FUN_100416c2b(void);
extern void __cdecl FUN_100416b7a(void);
__asm {
push    ebp
        mov     ebp, esp
        and     esp, -8
        sub     esp, 0x28
        push    ebx
        push    esi
        push    0
        mov     ebx, ecx                    ; ebx = this

        ; Get threshold value (double)
        ; call FUN_00707E70
        call FUN_00707e66
        fstp    qword ptr [esp + 8]         ; store threshold

        ; Initialize iterator
        push    ebx
        lea     ecx, [esp + 0x20]           ; iterator object
        ; call FUN_00416BC0
        call FUN_100416ba8

        ; Begin iteration - first advance
    L_iter_loop:
        lea     ecx, [esp + 0x1C]
        mov     dword ptr [esp + 0x1c], 0x782e08
        ; call FUN_00416D00 (iterator next)
        call FUN_100416cd7
        test    eax, eax
        je      L_iter_done

        ; Loop body starts here (0x594A8B)
    L_loop_body:
        ; Compare field_18 of current item with threshold
        mov     ecx, [esp + 0x2C]
        fld     qword ptr [ecx + 0x18]
        fcomp   qword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41                    ; check C3 or C2 (NaN or out of range)
        je      L_iter_done

        ; Item matches - get its value
        fld     qword ptr [ecx + 0x18]
        lea     ecx, [esp + 0x1C]
        fstp    qword ptr [esp + 0x10]      ; save matched value
        ; call FUN_00416D00
        call FUN_100416ca9
        lea     ecx, [esp + 0x1C]
        mov     esi, eax                    ; esi = result
        ; call FUN_00416D40
        call FUN_100416cde

        ; Check global state
        mov ecx, dword ptr [DAT_007dd268]
        mov     eax, [ecx + 0x40D9C]
        test    eax, eax
        jne     L_use_callback
        mov     eax, [ecx + 0x40DA0]
        test    eax, eax
        jne     L_use_callback

        ; Store string result
        mov     esi, [esi + 0x14]           ; esi = string pointer
        test    esi, esi
        mov     dword ptr [ecx + 0x40d9c], 1
        je      L_skip_ref
        inc     byte ptr [esi - 1]          ; increment ref count
    L_skip_ref:
        push    esi
        ; call FUN_0051EC90 (store string)
        call FUN_10051ebfa
        test    esi, esi
        je      L_continue
        mov     cl, [esi - 1]
        lea     eax, [esi - 1]
        dec     cl
        mov     [eax], cl
        jne     L_continue
        push    eax
        ; call FUN_004084e0 (free)
        call FUN_004084E0
        add     esp, 4
        jmp     L_continue

        ; Use callback path
    L_use_callback:
        fld     qword ptr [esp + 0x10]      ; reload matched value
        lea     eax, [esp + 0x10]
        fadd qword ptr [DAT_00782e00]
        push    eax
        push    esi
        mov     ecx, ebx
        fstp    qword ptr [esp + 0x18]      ; store result
        ; call FUN_00416A90 (callback)
        call FUN_1004169c4

    L_continue:
        lea     ecx, [esp + 0x1C]
        ; call FUN_00416D00 (iterator next)
        call FUN_100416c2b
        test    eax, eax
        jne     L_loop_body

    L_iter_done:
        lea     ecx, [esp + 0x1C]
        ; call FUN_00416C60 (iterator cleanup)
        call FUN_100416b7a
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
