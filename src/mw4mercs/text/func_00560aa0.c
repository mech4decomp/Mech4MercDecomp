/*
 * FUN_00560AA0 (112 B) — Constructor with singleton initialization.
 *
 * __thiscall (ECX = this), returns this pointer.
 *
 * Sets vtable, initializes a singleton on first call, increments a
 * reference counter, and sets field_0x114 to -8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void * FUN_00560AA0(void)
{
    

extern void __cdecl FUN_100560190(void);
extern int DAT_007ddddc;
extern void __cdecl FUN_1004084ba(void);
extern void __cdecl FUN_10055f3ff(void);
extern int DAT_007dddd8;
__asm {
push    esi
        mov     esi, ecx
        push    0
        call FUN_100560190
        mov eax, dword ptr [DAT_007ddddc]
        test    eax, eax
        mov     dword ptr [esi], 0x77df4c
        jne     skip_init
        push    0x44
        call FUN_1004084ba
        add     esp, 4
        test    eax, eax
        je      set_null
        push    0x43800000
        push    0x43800000
        push    0x43800000
        push    0x43800000
        push    0
        push    0
        push    0x77df44
        mov     ecx, eax
        call FUN_10055f3ff
        mov dword ptr [DAT_007dddd8], eax
        jmp     skip_init
set_null:
        mov dword ptr [DAT_007dddd8], 0x0
skip_init:
        inc dword ptr [DAT_007ddddc]
        mov     dword ptr [esi + 0x114], 0xfffffff8
        mov     eax, esi
        pop     esi
        ret
    }


}
