/*
 * FUN_0067ec30 (2801 B) — HUD constructor/initializer. Allocates several
 * arrays (0x7c/0xf8-byte blocks), fills them with color/state tables, and
 * runs two 0x1f-iteration loops that XOR-encrypt table entries with a key
 * (^0xe7). __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int FUN_00414fd0(void);
extern void *FUN_004084d0(int);
extern int FUN_006ae250(int);

__declspec(naked) void FUN_0067ec30(void)
{
    __asm {
        sub     esp, 0x28
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        mov     dword ptr [esp+0x24], esi
        call    FUN_00414fd0
        push    0x7c
        mov     dword ptr [esp+0x38], eax
        mov     dword ptr [esi], eax
        call    FUN_004084d0
        push    0x7c
        mov     dword ptr [esp+0x18], eax
        mov     dword ptr [esi+0x4], eax
        call    FUN_004084d0
        push    0x7c
        mov     dword ptr [esp+0x2c], eax
        mov     dword ptr [esi+0x8], eax
        call    FUN_004084d0
        push    0xf8
        mov     dword ptr [esp+0x24], eax
        mov     dword ptr [esi+0xc], eax
        call    FUN_004084d0
        xor     ebp, ebp
        add     esp, 0x10
        cmp     eax, ebp
        jz      loc_eca3
        mov     ecx, eax
        mov     edx, 0x1f
loc_ec8c:
        mov     dword ptr [ecx], 0xffffffff
        mov     dword ptr [ecx+0x4], 0xffffffff
        add     ecx, 0x8
        dec     edx
        jnz     loc_ec8c
        mov     ebx, eax
        jmp     loc_eca5
loc_eca3:
        xor     ebx, ebx
loc_eca5:
        push    0xf8
        mov     dword ptr [esi+0x1c], ebx
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      loc_ecd7
        mov     ecx, eax
        mov     edx, 0x1f
loc_ecc0:
        mov     dword ptr [ecx], 0xffffffff
        mov     dword ptr [ecx+0x4], 0xffffffff
        add     ecx, 0x8
        dec     edx
        jnz     loc_ecc0
        mov     edi, eax
        jmp     loc_ecd9
loc_ecd7:
        xor     edi, edi
loc_ecd9:
        push    0xf8
        mov     dword ptr [esi+0x20], edi
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebp
        jz      loc_ed0b
        mov     ecx, eax
        mov     edx, 0x1f
loc_ecf4:
        mov     dword ptr [ecx], 0xffffffff
        mov     dword ptr [ecx+0x4], 0xffffffff
        add     ecx, 0x8
        dec     edx
        jnz     loc_ecf4
        mov     esi, eax
        jmp     loc_ed0d
loc_ed0b:
        xor     esi, esi
loc_ed0d:
        mov     eax, dword ptr [esp+0x24]
        mov     dword ptr [eax+0x24], esi
        mov     dword ptr [esp+0x18], ebp
loc_ed18:
        mov     ecx, dword ptr [esp+0x18]
        push    ecx
        call    FUN_006ae250
        add     esp, 0x4
        test    eax, eax
        jle     loc_edfd
        mov     edx, dword ptr [esp+0x18]
        push    edx
        call    FUN_006ae250
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        mov     ecx, dword ptr [esp+0x20]
        mov     edx, dword ptr [esp+0x18]
        push    ecx
        mov     dword ptr [edx+ecx*4], eax
        call    FUN_006ae250
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        mov     ecx, dword ptr [esp+0x28]
        mov     edx, dword ptr [esp+0x30]
        push    ecx
        mov     dword ptr [edx+ecx*4], eax
        call    FUN_006ae250
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        mov     ecx, dword ptr [esp+0x30]
        mov     edx, dword ptr [esp+0x2c]
        push    ecx
        mov     dword ptr [esp+0x44], eax
        mov     dword ptr [edx+ecx*4], eax
        mov     dword ptr [esp+0x38], ebp
        call    FUN_006ae250
        add     esp, 0x1c
        test    eax, eax
        jle     loc_edfd
        mov     ecx, dword ptr [esp+0x18]
        mov     eax, dword ptr [esp+0x20]
        mov     edx, dword ptr [esp+0x10]
        mov     edx, dword ptr [edx+ecx*4]
        mov     eax, dword ptr [eax+ecx*4]
        sub     edx, eax
        mov     dword ptr [esp+0x2c], edx
        mov     edx, dword ptr [esp+0x28]
        sub     edx, eax
        mov     dword ptr [esp+0x28], edx
        jmp     loc_edc0
loc_edb8:
        mov     eax, dword ptr [esp+0x30]
        mov     ecx, dword ptr [esp+0x18]
loc_edc0:
        mov     edx, dword ptr [esp+0x2c]
        mov     dword ptr [edx+eax], 0xffffffff
        mov     edx, dword ptr [esp+0x28]
        mov     dword ptr [eax], 0xffffffff
        mov     dword ptr [edx+eax], 0xffffffff
        mov     edx, dword ptr [esp+0x1c]
        inc     edx
        add     eax, 0x4
        push    ecx
        mov     dword ptr [esp+0x20], edx
        mov     dword ptr [esp+0x34], eax
        call    FUN_006ae250
        mov     ecx, dword ptr [esp+0x20]
        add     esp, 0x4
        cmp     ecx, eax
        jl      loc_edb8
loc_edfd:
        mov     eax, dword ptr [esp+0x18]
        inc     eax
        cmp     eax, 0x1f
        mov     dword ptr [esp+0x18], eax
        jl      loc_ed18
        mov     eax, dword ptr [esp+0x10]
        mov     eax, dword ptr [eax]
        mov     ecx, 0xf0
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax+0x4], ecx
        mov     dword ptr [eax+0x8], ecx
        mov     ecx, 0xee
        mov     dword ptr [eax+0xc], ecx
        mov     dword ptr [eax+0x10], ecx
        mov     dword ptr [eax+0x14], ecx
        mov     dword ptr [eax+0x18], 0xe0
        mov     dword ptr [eax+0x1c], 0xef
        mov     dword ptr [eax+0x20], 0xeb
        mov     dword ptr [eax+0x24], 0xea
        mov     edx, 0xe2
        mov     dword ptr [eax+0x28], edx
        mov     dword ptr [eax+0x2c], 0xe0
        mov     dword ptr [eax+0x30], edx
        mov     dword ptr [eax+0x34], edx
        mov     edx, dword ptr [esp+0x20]
        mov     dword ptr [eax+0x38], 0xe5
        mov     eax, dword ptr [edx]
        mov     dword ptr [eax], 0xf0
        mov     dword ptr [eax+0x4], 0xf0
        mov     dword ptr [eax+0x8], 0xf0
        mov     dword ptr [eax+0xc], ecx
        mov     dword ptr [eax+0x10], ecx
        mov     dword ptr [eax+0x14], ecx
        mov     dword ptr [eax+0x18], 0xe0
        mov     dword ptr [eax+0x1c], 0xf7
        mov     ecx, 0xff
        mov     dword ptr [eax+0x20], ecx
        mov     dword ptr [eax+0x24], ecx
        mov     ecx, 0xe2
        mov     dword ptr [eax+0x28], ecx
        mov     dword ptr [eax+0x2c], 0xe0
        mov     dword ptr [eax+0x30], ecx
        mov     dword ptr [eax+0x34], ecx
        mov     ecx, dword ptr [esp+0x14]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax+0x38], 0xe5
        mov     eax, 0xf8
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx+0x4], eax
        mov     dword ptr [ecx+0x8], eax
        mov     dword ptr [ecx+0xc], eax
        mov     dword ptr [ecx+0x10], eax
        mov     dword ptr [ecx+0x14], eax
        mov     dword ptr [ecx+0x18], eax
        mov     dword ptr [ecx+0x1c], eax
        mov     dword ptr [ecx+0x20], eax
        mov     dword ptr [ecx+0x24], eax
        mov     dword ptr [ecx+0x28], eax
        mov     dword ptr [ecx+0x2c], eax
        mov     dword ptr [ecx+0x30], eax
        mov     dword ptr [ecx+0x34], eax
        mov     dword ptr [ecx+0x38], 0xe5
        mov     ecx, dword ptr [esp+0x10]
        mov     ecx, dword ptr [ecx+0x4]
        mov     dword ptr [ecx], 0xe1
        mov     dword ptr [ecx+0x4], 0xe1
        mov     dword ptr [ecx+0x8], 0xe1
        mov     dword ptr [ecx+0xc], 0xe3
        mov     dword ptr [ecx+0x10], 0xe3
        mov     dword ptr [ecx+0x14], 0xe3
        mov     ecx, dword ptr [edx+0x4]
        mov     dword ptr [ecx], 0xe1
        mov     dword ptr [ecx+0x4], 0xe1
        mov     dword ptr [ecx+0x8], 0xe1
        mov     dword ptr [ecx+0xc], 0xe3
        mov     dword ptr [ecx+0x10], 0xe3
        mov     dword ptr [ecx+0x14], 0xe3
        mov     ecx, dword ptr [esp+0x14]
        mov     ecx, dword ptr [ecx+0x4]
        mov     dword ptr [ecx], 0xe1
        mov     dword ptr [ecx+0x4], 0xe1
        mov     dword ptr [ecx+0x8], 0xe1
        mov     dword ptr [ecx+0xc], 0xe3
        mov     dword ptr [ecx+0x10], 0xe3
        mov     dword ptr [ecx+0x14], 0xe3
        mov     ecx, dword ptr [esp+0x10]
        mov     ecx, dword ptr [ecx+0x18]
        mov     dword ptr [ecx], 0xee
        mov     dword ptr [ecx+0x4], 0xee
        mov     dword ptr [ecx+0x8], 0xe0
        mov     dword ptr [ecx+0xc], 0xf3
        mov     dword ptr [ecx+0x10], 0xf3
        mov     dword ptr [ecx+0x14], 0xf3
        mov     dword ptr [ecx+0x18], 0xf3
        mov     dword ptr [ecx+0x1c], 0xed
        mov     ecx, dword ptr [edx+0x18]
        mov     dword ptr [ecx], 0xee
        mov     dword ptr [ecx+0x4], 0xee
        mov     dword ptr [ecx+0x8], 0xe0
        mov     dword ptr [ecx+0xc], 0xf3
        mov     dword ptr [ecx+0x10], 0xf3
        mov     dword ptr [ecx+0x14], 0xf3
        mov     dword ptr [ecx+0x18], 0xf3
        mov     dword ptr [ecx+0x1c], 0xed
        mov     ecx, dword ptr [esp+0x14]
        mov     ecx, dword ptr [ecx+0x18]
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx+0x4], eax
        mov     dword ptr [ecx+0x8], eax
        mov     dword ptr [ecx+0xc], eax
        mov     dword ptr [ecx+0x10], eax
        mov     dword ptr [ecx+0x14], eax
        mov     dword ptr [ecx+0x18], eax
        mov     dword ptr [ecx+0x1c], eax
        mov     ecx, dword ptr [esp+0x10]
        mov     ecx, dword ptr [ecx+0x20]
        mov     dword ptr [ecx], 0xe2
        mov     ecx, dword ptr [edx+0x20]
        mov     dword ptr [ecx], 0xe1
        mov     ecx, dword ptr [esp+0x14]
        mov     ecx, dword ptr [ecx+0x20]
        mov     dword ptr [ecx], 0xef
        mov     ecx, dword ptr [esp+0x10]
        mov     ecx, dword ptr [ecx+0x24]
        mov     dword ptr [ecx], 0xe3
        mov     dword ptr [ecx+0x4], 0xe3
        mov     ecx, dword ptr [edx+0x24]
        mov     dword ptr [ecx], 0xe3
        mov     dword ptr [ecx+0x4], 0xe3
        mov     ecx, dword ptr [esp+0x14]
        mov     ecx, dword ptr [ecx+0x24]
        mov     dword ptr [ecx], 0xe3
        mov     dword ptr [ecx+0x4], 0xe3
        mov     ecx, dword ptr [esp+0x10]
        mov     ecx, dword ptr [ecx+0x34]
        mov     dword ptr [ecx], 0xe3
        mov     ecx, dword ptr [edx+0x34]
        mov     dword ptr [ecx], 0xe3
        mov     ecx, dword ptr [esp+0x14]
        mov     ecx, dword ptr [ecx+0x34]
        mov     dword ptr [ecx], 0xe3
        mov     ecx, dword ptr [esp+0x10]
        mov     ecx, dword ptr [ecx+0x54]
        mov     dword ptr [ecx], 0xff
        mov     dword ptr [ecx+0x4], 0xff
        mov     dword ptr [ecx+0x8], 0xff
        mov     dword ptr [ecx+0xc], 0xf7
        mov     dword ptr [ecx+0x10], 0xf7
        mov     dword ptr [ecx+0x14], 0xf7
        mov     dword ptr [ecx+0x18], 0xee
        mov     dword ptr [ecx+0x1c], 0xe1
        mov     dword ptr [ecx+0x20], 0xe1
        mov     dword ptr [ecx+0x24], 0xe1
        mov     dword ptr [ecx+0x28], 0xe1
        mov     ecx, dword ptr [edx+0x54]
        mov     dword ptr [ecx], 0xff
        mov     dword ptr [ecx+0x4], 0xff
        mov     dword ptr [ecx+0x8], 0xff
        mov     dword ptr [ecx+0xc], 0xf7
        mov     dword ptr [ecx+0x10], 0xf7
        mov     dword ptr [ecx+0x14], 0xf7
        mov     dword ptr [ecx+0x18], 0xee
        mov     dword ptr [ecx+0x1c], 0xe1
        mov     dword ptr [ecx+0x20], 0xe1
        mov     dword ptr [ecx+0x24], 0xe1
        mov     dword ptr [ecx+0x28], 0xe1
        mov     ecx, dword ptr [esp+0x14]
        mov     ecx, dword ptr [ecx+0x54]
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx+0x4], eax
        mov     dword ptr [ecx+0x8], eax
        mov     dword ptr [ecx+0xc], eax
        mov     dword ptr [ecx+0x10], eax
        mov     dword ptr [ecx+0x14], eax
        mov     dword ptr [ecx+0x18], eax
        mov     dword ptr [ecx+0x1c], eax
        mov     dword ptr [ecx+0x20], eax
        mov     dword ptr [ecx+0x24], eax
        mov     dword ptr [ecx+0x28], eax
        mov     ecx, dword ptr [esp+0x10]
        mov     ecx, dword ptr [ecx+0x58]
        mov     dword ptr [ecx], 0xff
        mov     dword ptr [ecx+0x4], 0xff
        mov     dword ptr [ecx+0x8], 0xff
        mov     dword ptr [ecx+0xc], 0xf7
        mov     dword ptr [ecx+0x10], 0xee
        mov     dword ptr [ecx+0x14], 0xe1
        mov     dword ptr [ecx+0x18], 0xe1
        mov     ecx, dword ptr [edx+0x58]
        mov     dword ptr [ecx], 0xff
        mov     dword ptr [ecx+0x4], 0xff
        mov     dword ptr [ecx+0x8], 0xff
        mov     dword ptr [ecx+0xc], 0xf7
        mov     dword ptr [ecx+0x10], 0xee
        mov     dword ptr [ecx+0x14], 0xe1
        mov     dword ptr [ecx+0x18], 0xe1
        mov     ecx, dword ptr [esp+0x14]
        mov     ecx, dword ptr [ecx+0x58]
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx+0x4], eax
        mov     dword ptr [ecx+0x8], eax
        mov     dword ptr [ecx+0xc], eax
        mov     dword ptr [ecx+0x10], eax
        mov     dword ptr [ecx+0x14], eax
        mov     dword ptr [ecx+0x18], eax
        mov     ecx, dword ptr [esp+0x10]
        mov     ecx, dword ptr [ecx+0x60]
        mov     dword ptr [ecx], 0xee
        mov     dword ptr [ecx+0x4], 0xee
        mov     dword ptr [ecx+0x8], 0xef
        mov     dword ptr [ecx+0xc], 0xef
        mov     ecx, dword ptr [edx+0x60]
        mov     dword ptr [ecx], 0xee
        mov     dword ptr [ecx+0x4], 0xee
        mov     dword ptr [ecx+0x8], 0xef
        mov     dword ptr [ecx+0xc], 0xef
        mov     ecx, dword ptr [esp+0x14]
        mov     ecx, dword ptr [ecx+0x60]
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx+0x4], eax
        mov     dword ptr [ecx+0x8], eax
        mov     dword ptr [ecx+0xc], eax
        mov     ecx, dword ptr [esp+0x10]
        mov     eax, dword ptr [ecx+0x68]
        mov     dword ptr [eax], 0xf3
        mov     dword ptr [eax+0x4], 0xf3
        mov     eax, dword ptr [edx+0x68]
        mov     dword ptr [eax], 0xf3
        mov     dword ptr [eax+0x4], 0xf3
        mov     eax, dword ptr [esp+0x14]
        mov     eax, dword ptr [eax+0x68]
        mov     dword ptr [eax], 0xf3
        mov     dword ptr [eax+0x4], 0xf3
        mov     eax, dword ptr [esp+0x24]
        mov     dword ptr [eax+0x10], ecx
        mov     ecx, dword ptr [esp+0x14]
        mov     dword ptr [eax+0x18], ecx
        mov     ecx, 0x3
        mov     dword ptr [ebx], ecx
        mov     dword ptr [eax+0x14], edx
        mov     eax, 0x5
        mov     dword ptr [edi], eax
        mov     dword ptr [esi], 0x6
        mov     dword ptr [ebx+0x4], ebp
        mov     dword ptr [edi+0x4], ebp
        mov     dword ptr [esi+0x4], ebp
        mov     dword ptr [ebx+0x8], ecx
        mov     dword ptr [edi+0x8], eax
        mov     dword ptr [esi+0x8], 0x6
        mov     dword ptr [ebx+0xc], ebp
        mov     dword ptr [edi+0xc], ebp
        mov     dword ptr [esi+0xc], ebp
        mov     dword ptr [ebx+0x10], ecx
        mov     dword ptr [edi+0x10], eax
        mov     dword ptr [esi+0x10], 0x6
        mov     dword ptr [ebx+0x14], ebp
        mov     dword ptr [edi+0x14], ebp
        mov     dword ptr [esi+0x14], ebp
        mov     dword ptr [ebx+0x18], ecx
        mov     dword ptr [edi+0x18], ecx
        mov     dword ptr [esi+0x18], 0x4
        mov     dword ptr [ebx+0x1c], ebp
        mov     dword ptr [edi+0x1c], ebp
        mov     dword ptr [esi+0x1c], ebp
        mov     dword ptr [ebx+0x20], ecx
        mov     dword ptr [edi+0x20], eax
        mov     dword ptr [esi+0x20], 0x6
        mov     dword ptr [ebx+0x24], ebp
        mov     dword ptr [edi+0x24], ebp
        mov     dword ptr [esi+0x24], ebp
        mov     dword ptr [ebx+0x28], ecx
        mov     dword ptr [edi+0x28], eax
        mov     dword ptr [esi+0x28], 0x6
        mov     dword ptr [ebx+0x2c], ebp
        mov     dword ptr [edi+0x2c], ebp
        mov     dword ptr [esi+0x2c], ebp
        mov     dword ptr [ebx+0x30], ecx
        mov     eax, 0x4
        mov     dword ptr [edi+0x30], eax
        mov     dword ptr [esi+0x30], eax
        mov     dword ptr [ebx+0x34], ebp
        mov     dword ptr [edi+0x34], ebp
        mov     dword ptr [esi+0x34], ebp
        mov     eax, 0x1
        mov     dword ptr [ebx+0x38], eax
        mov     dword ptr [edi+0x38], eax
        mov     dword ptr [esi+0x38], eax
        mov     dword ptr [ebx+0x3c], ebp
        mov     dword ptr [edi+0x3c], ebp
        mov     dword ptr [esi+0x3c], ebp
        mov     dword ptr [ebx+0x40], ecx
        mov     dword ptr [edi+0x40], 0x5
        mov     dword ptr [esi+0x40], 0x6
        mov     dword ptr [ebx+0x44], ebp
        mov     dword ptr [edi+0x44], ebp
        mov     dword ptr [esi+0x44], ebp
        mov     dword ptr [ebx+0x48], ecx
        mov     dword ptr [edi+0x48], ecx
        mov     dword ptr [esi+0x48], 0x4
        mov     dword ptr [ebx+0x4c], ebp
        mov     dword ptr [edi+0x4c], ebp
        mov     dword ptr [esi+0x4c], ebp
        mov     dword ptr [ebx+0x50], ecx
        mov     dword ptr [edi+0x50], ecx
        mov     dword ptr [esi+0x50], 0x4
        mov     dword ptr [ebx+0x54], ebp
        mov     dword ptr [edi+0x54], ebp
        mov     dword ptr [esi+0x54], ebp
        mov     dword ptr [ebx+0x58], eax
        mov     dword ptr [edi+0x58], ecx
        mov     dword ptr [esi+0x58], 0x4
        mov     dword ptr [ebx+0x5c], ebp
        mov     dword ptr [edi+0x5c], ebp
        mov     dword ptr [esi+0x5c], ebp
        mov     dword ptr [ebx+0x60], eax
        mov     dword ptr [edi+0x60], eax
        mov     dword ptr [esi+0x60], eax
        mov     dword ptr [ebx+0x64], ebp
        mov     dword ptr [edi+0x64], ebp
        mov     dword ptr [esi+0x64], ebp
        mov     dword ptr [ebx+0x68], eax
        mov     dword ptr [edi+0x68], 0x2
        mov     dword ptr [esi+0x68], 0x4
        mov     dword ptr [ebx+0x6c], ebp
        mov     dword ptr [edi+0x6c], ebp
        mov     dword ptr [esi+0x6c], ebp
        mov     dword ptr [ebx+0x70], eax
        mov     dword ptr [edi+0x70], 0x2
        mov     dword ptr [esi+0x70], 0x4
        mov     dword ptr [ebx+0x74], ebp
        mov     dword ptr [edi+0x74], ebp
        mov     dword ptr [esi+0x74], ebp
        mov     dword ptr [ebx+0x78], ecx
        mov     dword ptr [edi+0x78], 0x4
        mov     dword ptr [esi+0x78], 0x6
        mov     dword ptr [ebx+0x7c], ebp
        mov     dword ptr [edi+0x7c], ebp
        mov     dword ptr [esi+0x7c], ebp
        mov     dword ptr [ebx+0x80], eax
        mov     dword ptr [edi+0x80], 0x2
        mov     dword ptr [esi+0x80], 0x6
        mov     dword ptr [ebx+0x84], ebp
        mov     dword ptr [edi+0x84], ebp
        mov     dword ptr [esi+0x84], ebp
        mov     dword ptr [ebx+0x88], eax
        mov     dword ptr [edi+0x88], eax
        mov     dword ptr [esi+0x88], 0x6
        mov     dword ptr [ebx+0x8c], ebp
        mov     dword ptr [edi+0x8c], ebp
        mov     dword ptr [esi+0x8c], ebp
        mov     dword ptr [ebx+0x90], eax
        mov     dword ptr [edi+0x90], 0x2
        mov     dword ptr [esi+0x90], 0x6
        mov     dword ptr [ebx+0x94], ebp
        mov     dword ptr [edi+0x94], ebp
        mov     dword ptr [esi+0x94], ebp
        mov     dword ptr [ebx+0x98], ecx
        mov     dword ptr [edi+0x98], 0x2
        mov     dword ptr [esi+0x98], 0x6
        mov     dword ptr [ebx+0x9c], ebp
        mov     dword ptr [edi+0x9c], ebp
        mov     dword ptr [esi+0x9c], ebp
        mov     dword ptr [ebx+0xa0], eax
        mov     dword ptr [edi+0xa0], 0x4
        mov     dword ptr [esi+0xa0], 0x6
        mov     dword ptr [ebx+0xa4], ebp
        mov     dword ptr [edi+0xa4], ebp
        mov     dword ptr [esi+0xa4], ebp
        mov     dword ptr [ebx+0xa8], ecx
        mov     dword ptr [edi+0xa8], 0x5
        mov     dword ptr [esi+0xa8], 0x6
        mov     dword ptr [ebx+0xac], ebp
        mov     dword ptr [edi+0xac], ebp
        mov     dword ptr [esi+0xac], ebp
        mov     dword ptr [ebx+0xb0], ecx
        mov     dword ptr [edi+0xb0], 0x5
        mov     dword ptr [esi+0xb0], 0x6
        mov     dword ptr [ebx+0xb4], ebp
        mov     dword ptr [edi+0xb4], ebp
        mov     dword ptr [esi+0xb4], ebp
        mov     dword ptr [ebx+0xb8], ecx
        mov     dword ptr [edi+0xb8], 0x5
        mov     dword ptr [esi+0xb8], 0x6
        mov     dword ptr [ebx+0xbc], ebp
        mov     dword ptr [edi+0xbc], ebp
        mov     dword ptr [esi+0xbc], ebp
        mov     dword ptr [ebx+0xc0], ecx
        mov     dword ptr [edi+0xc0], 0x5
        mov     ecx, 0x6
        mov     dword ptr [esi+0xc0], ecx
        mov     dword ptr [ebx+0xc4], ebp
        mov     dword ptr [edi+0xc4], ebp
        mov     dword ptr [esi+0xc4], ebp
        mov     dword ptr [ebx+0xc8], ebp
        mov     dword ptr [edi+0xc8], eax
        mov     dword ptr [esi+0xc8], ecx
        mov     dword ptr [ebx+0xcc], ebp
        mov     dword ptr [edi+0xcc], ebp
        mov     dword ptr [esi+0xcc], ebp
        mov     dword ptr [ebx+0xd0], eax
        mov     dword ptr [edi+0xd0], 0x2
        mov     dword ptr [esi+0xd0], 0x4
        mov     dword ptr [ebx+0xd4], ebp
        mov     dword ptr [edi+0xd4], ebp
        mov     dword ptr [esi+0xd4], ebp
        mov     dword ptr [ebx+0xd8], ebp
        mov     dword ptr [edi+0xd8], ebp
        mov     dword ptr [esi+0xd8], ebp
        mov     dword ptr [ebx+0xdc], ebp
        mov     dword ptr [edi+0xdc], ebp
        mov     dword ptr [esi+0xdc], ebp
        mov     dword ptr [ebx+0xe0], eax
        mov     dword ptr [edi+0xe0], eax
        mov     dword ptr [esi+0xe0], eax
        mov     dword ptr [ebx+0xe4], ebp
        mov     dword ptr [edi+0xe4], ebp
        mov     dword ptr [esi+0xe4], ebp
        mov     dword ptr [ebx+0xe8], eax
        mov     dword ptr [edi+0xe8], eax
        mov     dword ptr [esi+0xe8], eax
        mov     eax, dword ptr [esp+0x14]
        mov     dword ptr [ebx+0xec], ebp
        mov     dword ptr [edi+0xec], ebp
        mov     dword ptr [esi+0xec], ebp
        mov     dword ptr [ebx+0xf0], ebp
        mov     dword ptr [edi+0xf0], ebp
        mov     dword ptr [esi+0xf0], ebp
        mov     dword ptr [ebx+0xf4], ebp
        mov     ebx, dword ptr [esp+0x10]
        mov     dword ptr [edi+0xf4], ebp
        xor     edi, edi
        sub     ebx, edx
        sub     eax, edx
        mov     dword ptr [esi+0xf4], ebp
        mov     dword ptr [esp+0x18], edx
        mov     dword ptr [esp+0x30], eax
loc_f678:
        push    edi
        call    FUN_006ae250
        add     esp, 0x4
        test    eax, eax
        jle     loc_f704
        push    edi
        mov     dword ptr [esp+0x24], ebp
        call    FUN_006ae250
        add     esp, 0x4
        test    eax, eax
        jle     loc_f704
        mov     edx, dword ptr [esp+0x18]
        mov     esi, dword ptr [edx]
        mov     eax, edx
        mov     ecx, dword ptr [ebx+eax]
        mov     edx, dword ptr [esp+0x30]
        mov     eax, dword ptr [edx+eax]
        sub     ecx, esi
        sub     eax, esi
        mov     dword ptr [esp+0x2c], ecx
        mov     dword ptr [esp+0x28], eax
        jmp     loc_f6ba
loc_f6b6:
        mov     ecx, dword ptr [esp+0x2c]
loc_f6ba:
        mov     eax, dword ptr [esp+0x34]
        mov     edx, eax
        xor     edx, dword ptr [ecx+esi]
        push    edi
        xor     edx, 0xe7
        mov     dword ptr [ecx+esi], edx
        mov     edx, dword ptr [esi]
        mov     ecx, eax
        xor     ecx, edx
        xor     ecx, 0xe7
        mov     edx, eax
        mov     eax, dword ptr [esp+0x2c]
        mov     dword ptr [esi], ecx
        xor     edx, dword ptr [eax+esi]
        xor     edx, 0xe7
        mov     dword ptr [eax+esi], edx
        inc     dword ptr [esp+0x24]
        add     esi, 0x4
        call    FUN_006ae250
        mov     ecx, dword ptr [esp+0x24]
        add     esp, 0x4
        cmp     ecx, eax
        jl      loc_f6b6
loc_f704:
        mov     ecx, dword ptr [esp+0x18]
        inc     edi
        add     ecx, 0x4
        cmp     edi, 0x1f
        mov     dword ptr [esp+0x18], ecx
        jl      loc_f678
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x28
        ret
    }
}
