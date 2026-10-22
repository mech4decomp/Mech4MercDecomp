/*
 * FUN_005e1c70 (197 B) — static object constructor.
 *
 * Allocates a 0xA8-byte NavPoint object (via FUN_00501a20), an 8-byte
 * object, and a 0xC-byte object, storing each in globals 0x007F2528,
 * 0x007F252C, 0x007F2530 (or NULL on allocation failure).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005e1c70(void)
{
    

extern int DAT_007f26a0;
extern int DAT_007f268c;
extern int DAT_007f2528;
extern int DAT_007f252c;
extern int DAT_007f2530;
__asm {
push    esi
        push    edi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        xor     edi, edi
        add     esp, 4
        cmp     esi, edi
        jz      l_alloc1_fail
        mov eax, dword ptr [DAT_007f26a0]
        mov ecx, dword ptr [DAT_007f268c]
        push    0x502c60
        push    0x5028b0
        push    0x62efa0
        push    0x62ec80
        push    0x62e8e0
        push    eax
        push    0x62df30
        push    0x5e1da0
        push    edi
        push    edi
        push    ecx
        push    0x788900
        push    0x4c7
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x6039e0
        mov dword ptr [DAT_007f2528], esi
        jmp     l_after1
    l_alloc1_fail:
        mov dword ptr [DAT_007f2528], edi
    l_after1:
        push    0x8
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      l_alloc2_fail
        mov     dword ptr [eax + 4], edi
        mov     dword ptr [eax], edi
        mov dword ptr [DAT_007f252c], eax
        jmp     l_after2
    l_alloc2_fail:
        mov dword ptr [DAT_007f252c], edi
    l_after2:
        push    0xc
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      l_alloc3_fail
        mov ecx, dword ptr [DAT_007f252c]
        mov     edx, dword ptr [ecx]
        pop     edi
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], edx
        mov     dword ptr [eax], 0x7888fc
        mov dword ptr [DAT_007f2530], eax
        pop     esi
        ret
    l_alloc3_fail:
        mov dword ptr [DAT_007f2530], edi
        pop     edi
        pop     esi
        ret
    }


}
