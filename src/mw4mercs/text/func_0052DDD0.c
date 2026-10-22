/*
 * FUN_0052ddd0 (241 B) — __fastcall destructor-like method.
 * Calls FUN_0052dbb0 (constructor), then releases resources.
 * Virtual calls through vtable at [this+0x48] and [this+0x40].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0052dbb0(void);
extern void __cdecl FUN_004084E0(void *);

/* Global data references */
extern int DAT_007afaf0;
extern int DAT_007afaf4;
extern int DAT_007afaf8;
extern int DAT_007afafc;

__declspec(naked) void __fastcall FUN_0052ddd0(void)
{
    
__asm {
push    ebx
        push    esi
        push    edi
        mov     esi, ecx

        call    FUN_0052dbb0

        mov     edi, dword ptr [esi + 0x48]
        xor     ebx, ebx
        cmp     edi, ebx
        jz      skip_obj_48

        ; Virtual call: [edi+0]() with arg 0
        mov     eax, dword ptr [edi]
        push    ebx
        mov     ecx, edi
        call    dword ptr [eax + 0xc]

        mov     edx, dword ptr [edi]
        mov     ecx, edi
        mov     dword ptr [edi + 8], 0xffffffec
        call    dword ptr [edx + 4]

        push    eax
        call    FUN_004084E0
        add     esp, 4

        cmp     edi, ebx
        jz      skip_release_48
        mov     eax, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [eax]

skip_release_48:
        mov     dword ptr [esi + 0x48], ebx

skip_obj_48:
        mov     ecx, dword ptr [esi + 0x40]
        cmp     ecx, ebx
        jz      skip_obj_40
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov     dword ptr [esi + 0x40], ebx

skip_obj_40:
        mov     eax, dword ptr [esi + 0x54]
        cmp     eax, ebx
        mov     byte ptr [esi + 0x44], bl
        mov     byte ptr [esi], bl
        mov     dword ptr [esi + 0x50], ebx
        jz      skip_free_54
        push    eax
        call    FUN_004084E0
        add     esp, 4

skip_free_54:
        xor     eax, eax
        mov     dword ptr [esi + 0x54], ebx
        mov     dword ptr [esi + 0x58], ebx

        ; Zero 4 dwords at [esi+0x2020]
        lea     ecx, [esi + 0x2020]
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx + 4], eax
        mov     dword ptr [ecx + 8], eax
        mov     dword ptr [ecx + 0xc], eax

        ; Copy 4 dwords from [0x007afaf0] to [esi+0xa4]
        mov     eax, dword ptr [DAT_007afaf0]
        mov     ecx, dword ptr [DAT_007afaf4]
        lea     edx, [esi + 0xa4]
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [DAT_007afaf8]
        mov     dword ptr [edx + 4], ecx
        mov     ecx, dword ptr [DAT_007afafc]
        mov     dword ptr [edx + 8], eax
        mov     eax, dword ptr [esi + 0xd8]
        cmp     eax, ebx
        mov     byte ptr [esi + 8], bl
        mov     byte ptr [esi + 9], bl
        mov     dword ptr [esi + 0x20], ebx
        mov     dword ptr [esi + 0xb4], ebx
        mov     dword ptr [edx + 0xc], ecx
        mov     byte ptr [esi + 0xc], bl
        jz      skip_free_d8
        push    eax
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [esi + 0xd8], ebx

skip_free_d8:
        mov     eax, dword ptr [esi + 0xdc]
        cmp     eax, ebx
        jz      skip_free_dc
        push    eax
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [esi + 0xdc], ebx

skip_free_dc:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }


}
