/*
 * 85 bytes — __thiscall singleton destructor (variant 5).
 * Same structure as FUN_005912D0 but uses different globals
 * (0x7F1FD8 / 0x7F1FD4).
 * ret 4 (one stack param: deleting-destructor flag).
 */

void FUN_004169C0(void);
void FUN_00416130(void);
void FUN_00415E30(void);
void FUN_004084E0(void *ptr);

extern int g_counter_7F1FD4;   /* 0x7F1FD4 */
extern void *g_ptr_7F1FD8;     /* 0x7F1FD8 */

__declspec(naked) void FUN_00598380(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169C0
        test    byte ptr [esp + 8], 1
        je      skip_delete

        mov     ecx, dword ptr [g_ptr_7F1FD8]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_counter_7F1FD4]
        jne     skip_delete

        push    edi
        mov     edi, dword ptr [g_ptr_7F1FD8]
        test    edi, edi
        je      clear_ptr
        mov     ecx, edi
        call    FUN_00415E30
        push    edi
        call    FUN_004084E0
        add     esp, 4

    clear_ptr:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_ptr_7F1FD8], 0
        pop     esi
        ret     4

    skip_delete:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
