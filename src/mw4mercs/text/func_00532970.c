/*
 * FUN_00532970 (305 B) — Game initialization/setup function
 * Initializes various game subsystems: audio, decal system,
 * window/display settings, and global state.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00532970(void)
{
    

extern int DAT_007dd234;
extern void __cdecl FUN_006f4950(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004cc3c0(void);
extern void __cdecl FUN_004c8eb0(void);
extern void __cdecl FUN_0053fa70(void);
extern void __cdecl FUN_005330c0(void);
extern int DAT_007db094;
extern void __cdecl FUN_0053beb0(void);
extern int DAT_007f293c;
extern int DAT_00858a38;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0061acf0(void);
extern void __cdecl FUN_0061ad30(void);
extern int DAT_007dd268;
extern void __cdecl FUN_00516bb0(void);
extern void __cdecl FUN_00544620(void);
extern void __cdecl FUN_005394a0(void);
extern void __cdecl FUN_006f49a0(void);
__asm {
push    ecx
        mov eax, dword ptr [DAT_007dd234]
        push    esi
        push    eax
        mov     esi, ecx
        call FUN_006f4950
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        mov ecx, dword ptr [DAT_007dab40]
        xor     ecx, eax
        mov     eax, dword ptr [ecx + 0x14]
        xor     eax, 0x85739531
        jnz     skip_alloc

        push    0x1C18
        call FUN_004084d0
        add     esp, 0x04
        test    eax, eax
        jz      alloc_failed
        mov     ecx, eax
        call FUN_004cc3c0
        jmp     alloc_done

alloc_failed:
        xor     eax, eax

alloc_done:
        push    0x05
        push    eax
        call FUN_004c8eb0
        add     esp, 0x08

skip_alloc:
        mov     ecx, esi
        call FUN_0053fa70
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        mov ecx, dword ptr [DAT_007dab40]
        xor     ecx, eax
        mov     eax, dword ptr [ecx + 0x0C]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x50]
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jnz     skip_sub_call
        mov     ecx, esi
        call FUN_005330c0

skip_sub_call:
        mov eax, dword ptr [DAT_007db094]
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x28]
        push    0x00
        mov     ecx, esi
        push    edx
        call FUN_0053beb0
        mov eax, dword ptr [DAT_007f293c]
        test    eax, eax
        mov dword ptr [DAT_00858a38], 0x538000
        jz      skip_free_global
        push    eax
        call FUN_004084e0
        add     esp, 0x04

skip_free_global:
        push    0x01
        push    0xFFFF
        call FUN_0061acf0
        mov     ecx, eax
        call FUN_0061ad30
        lea     ecx, [esp + 0x04]
        push    ecx
        mov ecx, dword ptr [DAT_007dd268]
        call FUN_00516bb0
        mov     edx, dword ptr [esp + 0x04]
        mov ecx, dword ptr [DAT_007dab44]
        mov eax, dword ptr [DAT_007dab40]
        push    edx
        xor     eax, dword ptr [ecx]
        mov     ecx, dword ptr [eax + 0x0C]
        xor     ecx, 0x85739531
        call FUN_00544620
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        xor     edx, dword ptr [eax]
        mov     ecx, dword ptr [edx + 0x0C]
        xor     ecx, 0x85739531
        call FUN_005394a0
        call FUN_006f49a0
        mov     eax, dword ptr [esp + 0x04]
        test    eax, eax
        pop     esi
        jz      skip_final_free
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_final_free
        push    eax
        call FUN_004084e0
        add     esp, 0x04

skip_final_free:
        pop     ecx
        ret
    }


}
