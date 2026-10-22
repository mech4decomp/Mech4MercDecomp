/*
 * FUN_005309A0 (449 B) — Game state cleanup/shutdown function
 * Called with __thiscall (ECX = this pointer).
 * Cleans up various subsystems: stops audio, releases resources,
 * frees allocations, resets global state.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_005309a0(void)
{
    

extern int DAT_007dd268;
extern void __cdecl FUN_1005169c5(void);
extern void __cdecl FUN_100516b1a(void);
extern void __cdecl FUN_005e1399(void);
extern void __cdecl FUN_00565d95(void);
extern void __cdecl FUN_00566310(void);
extern void __cdecl FUN_0056476b(void);
extern void __cdecl FUN_005634c7(void);
extern void __cdecl FUN_00564841(void);
extern void __cdecl FUN_1004d40f2(void);
extern void __cdecl FUN_100408432(void);
extern void __cdecl FUN_0061d654(void);
extern int DAT_007f27b0;
extern int DAT_00858a38;
extern void __cdecl FUN_006068ef(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db0b8;
extern void __cdecl FUN_1004d2afa(void);
extern int DAT_007da884;
extern void __cdecl FUN_100511805(void);
extern void __cdecl FUN_10050f40a(void);
extern void __cdecl FUN_1005117e7(void);
extern void __cdecl FUN_100511bae(void);
extern void __cdecl FUN_100511b13(void);
extern int DAT_007f293c;
extern void __cdecl FUN_100408348(void);
extern int DAT_007ddd34;
__asm {
push    ebx
        push    esi
        mov     esi, ecx
        mov ecx, dword ptr [DAT_007dd268]
        xor     ebx, ebx
        cmp     ecx, ebx
        jz      skip_audio_stop
        call FUN_1005169c5
        mov ecx, dword ptr [DAT_007dd268]
        call FUN_100516b1a

skip_audio_stop:
        mov     byte ptr [esi + 0x3530], bl
        mov     byte ptr [esi + 0x350c], bl
        call FUN_005e1399
        cmp     byte ptr [esi + 0x16], bl
        jz      skip_full_cleanup

        mov     ecx, dword ptr [esi + 0x3088]
        cmp     ecx, ebx
        jz      skip_release_1
        mov     eax, dword ptr [ecx]
        push    0x3
        call    dword ptr [eax]
        mov     dword ptr [esi + 0x3088], ebx

skip_release_1:
        mov     ecx, dword ptr [esi + 0x307c]
        cmp     ecx, ebx
        mov     dword ptr [esi + 0x3084], ebx
        jz      skip_release_2
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
        mov     dword ptr [esi + 0x307c], ebx

skip_release_2:
        cmp     byte ptr [esi + 0x17], bl
        mov     dword ptr [esi + 0x18], ebx
        jz      skip_full_cleanup

        call FUN_00565d95
        call FUN_00566310
        call FUN_0056476b
        push    0x007753b8
        push    0x0077b29c
        push    0x0077b294
        call FUN_005634c7
        push    eax
        call FUN_00564841
        add     esp, 0x10

skip_full_cleanup:
        mov     eax, dword ptr [esp + 0x0C]
        push    eax
        mov     ecx, esi
        call FUN_1004d40f2
        mov     eax, dword ptr [esi + 0x204d20]
        cmp     eax, ebx
        jz      skip_free_big
        push    eax
        call FUN_100408432
        add     esp, 0x04
        mov     dword ptr [esi + 0x204d20], ebx

skip_free_big:
        call FUN_0061d654
        mov ecx, dword ptr [DAT_007f27b0]
        mov dword ptr [DAT_00858a38], 0x535260
        call FUN_006068ef
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov eax, dword ptr [DAT_007dab40]
        mov ecx, dword ptr [DAT_007db0b8]
        xor     edx, eax
        mov     eax, dword ptr [edx + 0x0C]
        xor     eax, 0x85739531
        mov     byte ptr [eax + 0x7C], bl
        call FUN_1004d2afa
        mov ecx, dword ptr [DAT_007da884]
        cmp     ecx, ebx
        jz      skip_release_3
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]

skip_release_3:
        mov ecx, dword ptr [DAT_007dd268]
        cmp     ecx, ebx
        jz      skip_audio_cleanup

        cmp     dword ptr [ecx + 0x1C], 0x6
        jnz     audio_else
        call FUN_100511805
        mov ecx, dword ptr [DAT_007dd268]
        call FUN_10050f40a
        mov eax, dword ptr [DAT_007dd268]
        mov     dword ptr [eax + 0x1C], 0xFFFFFFFF
        jmp     audio_cont

audio_else:
        call FUN_1005117e7

audio_cont:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0x0C]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x50]
        cmp     dword ptr [ecx + 0x10], ebx
        jz      skip_audio_sub
        mov ecx, dword ptr [DAT_007dd268]
        call FUN_100511bae

skip_audio_sub:
        mov ecx, dword ptr [DAT_007dd268]
        call FUN_100511b13

skip_audio_cleanup:
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x0C]
        mov eax, dword ptr [DAT_007f293c]
        xor     ecx, 0x85739531
        cmp     eax, ebx
        mov     byte ptr [ecx + 0x14], bl
        jz      skip_free_last
        push    eax
        call FUN_100408348
        add     esp, 0x04
        mov dword ptr [DAT_007f293c], ebx

skip_free_last:
        mov eax, dword ptr [DAT_007ddd34]
        mov     dword ptr [esi + 0x302C], ebx
        pop     esi
        cmp     eax, ebx
        pop     ebx
        jz      skip_callback
        call    eax

skip_callback:
        ret     0x04
    }


}
